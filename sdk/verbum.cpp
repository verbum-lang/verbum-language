
#include <iostream>
#include <stdlib.h>

#include "antlr4-runtime.h"
#include "TLexer.h"
#include "TParser.h"
#include "TParserBaseVisitor.h"

using namespace verbum;
using namespace antlr4;

std::vector<char> buffer;
std::string currentFileName;

//
// Controle dos erros.
//
class MyParserErrorListener: public BaseErrorListener {
  void syntaxError(
      Recognizer *recognizer,
      Token *offendingSymbol,
      size_t line,
      size_t charPositionInLine,
      const std::string &msg,
      std::exception_ptr e) 
  {
    // Verifica se é erro do ANTLR4 ou se é de origem da gramática.
    std::string message = msg;
    std::string search  = "internal:";
    std::size_t found   = message.find(search);

    if (found != std::string::npos) {
      message = "Custom error message.";
    }

    // Informações gerais.
    std::cout << " " << std::endl << std::endl;
    std::cout << " Filename: " << currentFileName << std::endl;
    std::cout << " Syntax error [" << line << "," << 
      charPositionInLine << "] -> " << message << std::endl << std::endl;
    
    // Imprime linhas do erro.
    size_t errorLineLimit = 10;
    size_t startErrorLines = 1;

    if (line > errorLineLimit)
      startErrorLines = line - errorLineLimit;

    std::string lineSize = std::to_string((int) startErrorLines);

    for (size_t a=startErrorLines; a<=line; a++)
      printSourceLine(a, lineSize.length());

    // Imprime apontador para caractere onde está o erro.
    std::string lnSz = std::to_string((int) line);
    size_t lastLineSize = ((lineSize.length() == lnSz.length()) ? 2 : 1) + lnSz.length() + 4;
    size_t size = charPositionInLine + lastLineSize;

    for (size_t a=0; a<size; a++)
      std::cout << ' ';
    std::cout << '^' << std::endl;

    for (size_t a=0; a<size; a++)
      std::cout << ' ';
    std::cout << '|' << std::endl;

    for (size_t a=0; a<size; a++)
      std::cout << ' ';
    std::cout << "`--> Syntax error: " << message << std::endl << std::endl;

    exit(0);
  }

  // Imprime linha do erro.
  void printSourceLine (size_t line, size_t sizeCh) {
    size_t counter = 1;
    std::string lineSize = std::to_string((int) line);

    std::cout << ((sizeCh == lineSize.length()) ? "  " : " ") << line << "  | ";

    for (auto i: buffer) {
      if (counter != line && i == '\n')
        counter++;
      else if (counter == line && i == '\n')
        break;
      else {
        if (counter == line) {
          if (i == '\v' || i == '\t')
            std::cout << ' ';
          else
            std::cout << i;
        }
      }
    }

    std::cout << std::endl;
  }
};

//
// Realiza acesso aos nodes da árvore sintática.
//
class  MyTParserBaseVisitor : public TParserBaseVisitor {
public:

  /*
  ** Comentários.
  */
  antlrcpp::Any visitComment(TParser::CommentContext *ctx) {

    if (ctx->BlockComment())
      std::cout << "BLOCK COMMENT: " << ctx->BlockComment()->getText() << std::endl;
    else if (ctx->LineComment())
      std::cout << "LINE COMMENT: " << ctx->LineComment()->getText() << std::endl;
   
    return visitChildren(ctx);
  }

  /*
  ** Importações: use.
  */
  antlrcpp::Any visitUseString(TParser::UseStringContext *ctx) {
    std::cout << "USE: " << ctx->getText() << std::endl;
    
    return visitChildren(ctx);
  }

  /*
  ** Variáveis.
  */
  antlrcpp::Any visitVariableDefinition(TParser::VariableDefinitionContext *ctx) {
    std::cout << "VARIABLE -> " << ctx->getText() << std::endl;
    return visitChildren(ctx);
  }
};

int main(int argc, const char **argv) {

  // Verificações iniciais.
  char *filename = (char *) malloc(strlen(argv[1]) + 1);

  if (!filename) {
    std::cout << "Error alloc memory." << std::endl;
    exit(0);
  }

  memset(filename, 0x00, strlen(argv[1]) + 1);
  memcpy(filename, argv[1], strlen(argv[1]));

  std::ifstream f(filename);
  if (!f.good()) {
    std::cout << "Error open file" << std::endl;
    exit(0);
  }

  // Carrega path completo do arquivo. 
  char actualpath [PATH_MAX+1];
  realpath(filename, actualpath);
  currentFileName = std::string(actualpath);

  // Processa arquivo da syntax.
  std::cout << "\n+++++++++++++++++++++++++++" << std::endl;
  std::ifstream infile(filename);

  infile.seekg(0, infile.end);
  size_t length = infile.tellg();
  infile.seekg(0, infile.beg);

  if (length > 0) {
    buffer.resize(length);    
    infile.read(&buffer[0], length);
  }

  for (auto i: buffer)
    std::cout << i;
  std::cout << std::endl;

  // Processa tokens.
  std::cout << "\n+++++++++++++++++++++++++++" << std::endl;
  std::ifstream stream;
  stream.open(filename);
  
  MyParserErrorListener errorListner;
  ANTLRInputStream input(stream);
  TLexer lexer(&input);

  // Configura controle dos erros.
  lexer.removeErrorListeners();
  lexer.addErrorListener(&errorListner);
  
  CommonTokenStream tokens(&lexer);

  tokens.fill();
  for (auto token : tokens.getTokens()) {
    std::cout << token->toString() << std::endl;
  }

  TParser parser(&tokens);

  // Configura controle dos erros.
  parser.removeErrorListeners();
  parser.addErrorListener(&errorListner);

  // Acessa árvore sintática através de visitor.
  std::cout << "\n+++++++++++++++++++++++++++" << std::endl;

  MyTParserBaseVisitor visitor;
  TParser::MainContext* treeVisit = parser.main();
  visitor.visitMain(treeVisit);

  free(filename);
  return 0;
}


