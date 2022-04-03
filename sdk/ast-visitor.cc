
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <fstream>

// ANTLR4.
#include "antlr4-runtime.h"
#include "TLexer.h"
#include "TParser.h"
#include "TParserBaseVisitor.h"
#include "TParserBaseVisitor.h"

#include "configuration.h"
#include "ast-struct.h"
#include "ast-visitor.h"

using namespace antlr4;
using namespace verbum;

/*
** Prepara estrutura AST para uso. 
*/
void verbum_ast_visitor::prepare_ast ()
{
    
}

/*
** Importações: use.
*/
antlrcpp::Any verbum_ast_visitor::visitUseString (TParser::UseStringContext *ctx) 
{
    std::cout << "import [use]: " << ctx->getText() << std::endl;

    std::string content = ctx->getText();

    for (auto i : content) {
        std::cout << i << std::endl;
    }

    return visitChildren(ctx);
}

verbum_ast_control_t * verbum_ast_visitor::get_verbum_ast ()
{
    return this->ast;
}


