%{
#include "syntaxe.tab.h"
%}

%%
"main" return t_MAIN;
"printf" return t_PRINTF;
"if" return t_IF;
"else" return t_ELSE;
"while" return t_WHILE;
"{" return t_AO;
"}" return t_AF;
"const" return t_CONST;
"int" return t_INT;
[A-Za-z][0-9A-Za-z_]* {yylval.variable=(char *) malloc(sizeof(char *));strcpy(yylval.variable,yytext); return t_ID;}
"+" return t_PLUS;
"-" return t_MINUS;
"*" return t_MUL;
"/" return t_DIV;
"=" return t_EQUAL;
"(" return t_PO;
")" return t_PF;
[ \t\n]+ ;
"," return t_COMMA;
";" return t_DC;
[0-9]+(e[0-9]+)? {yylval.nombre=atof(yytext); return t_DECIMALE;}
  /*"e" return t_EXPO;*/
"<" return t_INF;
">" return t_SUP;

%%
int yywrap(){
    return 1;
}

/*
int main(){
    yylex();
    return 0;
}
*/

