lexer grammar TLexer;

@lexer::postinclude {
	#ifndef _WIN32
	#pragma GCC diagnostic ignored "-Wunused-parameter"
	#endif
}

// Comandos e palavras reservadas.
Use : 'use' ;
Var : 'var' ;
Bool : ( 'true' | 'false' ) ;

// Operadores.
End : ';' ;
Attr : '=' ;
TwoPoint : ':';
Separator : ',' ;
OpenArIndex : '[' ;
CloseArIndex : ']' ;
OpenBlock : '{' ;
CloseBlock : '}' ;

//
// Identificador:
// 		nome de tipos de variáveis
//		nome de variáveis
//		funções e métodos
//		classes / objetos
//		interface
//		abstração
//
Identifier
	: IDPrefix
	| IDPrefix ( Words | [0-9]+ | [_] )*
	;

IDPrefix
	: ( [_] | Words )
	;

TypeSpec
	: [:] ( Identifier )
	;

// Tokens geras
Integer : [0-9]+ ; 
Float : FloatLiteral ;

String
	: ( '"' .*? '"' | '\'' .*? '\'' )
	;

Whitespace
    : [ \t]+
		-> skip
    ;

Newline
    : (   '\r' '\n'?
      |   '\n'
      )
	  	-> skip
    ;

Words
	: [a-zA-Z\u0080-\u{10FFFF}]+
	;


// Comentários.
BlockComment
    : '/*' .*? '*/'
		-> skip
    ;

LineComment
    : '//' ~[\r\n]*
		-> skip
    ;

// Fragments...
fragment DecimalExponent : 'e' | 'E' | 'e+' | 'E+' | 'e-' | 'E-' DecimalDigits;
fragment DecimalDigits   : ('0'..'9'|'_')+ ;
fragment FloatLiteral    : FloatFrag ImaginarySuffix?;
fragment IntegerLiteral  : IntegerFrag IntSuffix?;
fragment FloatTypeSuffix : 'f' | 'F' | 'L';
fragment ImaginarySuffix : 'i';
fragment IntSuffix       : 'L'|'u'|'U'|'Lu'|'LU'|'uL'|'UL' ;
fragment IntegerFrag         : Decimal| Binary| Octal| Hexadecimal ;
fragment Decimal         : '0' | '1'..'9' (DecimalDigit | '_')* ;
fragment Binary          : ('0b' | '0B') ('0' | '1' | '_')+ ;
fragment Octal           : '0' (OctalDigit | '_')+ ;
fragment Hexadecimal     : ('0x' | '0X') (HexDigit | '_')+;  
fragment DecimalDigit    : '0'..'9' ;
fragment OctalDigit      : '0'..'7' ;
fragment HexDigit        : ('0'..'9'|'a'..'f'|'A'..'F') ;
fragment FloatFrag
 : DecimalDigits (  FloatTypeSuffix 
                   | '.' DecimalDigits DecimalExponent?
                   )
 | '.' DecimalDigits DecimalExponent?
 ;
 
fragment NUMBER: DIGITS | OCTAL_DIGITS | HEX_DIGITS;
fragment DIGITS: '1'..'9' '0'..'9'*;
fragment OCTAL_DIGITS: '0' '0'..'7'+;
fragment HEX_DIGITS: '0x' ('0'..'9' | 'a'..'f' | 'A'..'F')+;

/* Tokens desconhecidos. */
//Unknown	: . ;


