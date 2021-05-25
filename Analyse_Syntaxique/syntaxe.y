%{
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include "TDS.h"
    int yyerror();
    int yylex();
    int valeur_temp[128];
    int indexTemp=250;
    int compteurInstruction=0;
    int compteurDebutWhile=0;
    FILE* fichierASM = NULL;

%}

%union{
    char * variable;
    int nombre;
}

%token t_MAIN 
%token t_AO t_AF
%token t_CONST t_INT 
%token <variable> t_ID
%token t_PLUS t_MINUS t_MUL t_DIV t_EQUAL
%token t_PO t_PF
%token t_SPACE
%token t_COMMA t_NL t_DC
%token t_PRINTF  
%token <nombre> t_DECIMALE 
%token t_IF t_INF t_SUP t_ELSE t_WHILE
%type <nombre> Expression
%type <nombre> t_IF
%type <nombre> t_WHILE

%type <variable> Declaration
%type <nombre> Condition

%right t_EQUAL
%left t_PLUS t_MINUS
%left t_MUL t_DIV


%%
Prog:
    t_MAIN 
        {
            
            fichierASM = fopen("asm.txt", "w+");

            if (fichierASM == NULL)
            {
                printf("Impossible d'ouvrir le fichierASMASM");
                exit(1);
            }        
  
        }

     t_PO t_PF t_AO Body t_AF {printf("J'ai trouvé un programme\n");} 
    ;

If : 
    t_IF t_PO Condition t_PF {compteurInstruction++;
                              $1=ftell(fichierASM); 
                              printf("JMF %d %d\n",$3,$1); 
                              fprintf(fichierASM, "JMF %d %d",$3,$1);} 
    t_AO BodyIF t_AF         {fseek(fichierASM,$1,SEEK_SET); 
                              fprintf(fichierASM, "JMF %d %d\n",$3,compteurInstruction+1);
                              fseek(fichierASM,0,SEEK_END);} 
    SuiteIf                  {printf("J'ai un if\n");}
  ;

While : 
    t_WHILE t_PO Condition t_PF {compteurDebutWhile=compteurInstruction;
                                 compteurInstruction++;
                                 $1=ftell(fichierASM); 
                                 printf("JMF %d %d\n",$3,$1); 
                                 fprintf(fichierASM, "JMF %d %d",$3,$1);} 
    t_AO BodyIF                 {fprintf(fichierASM, "JMP %d\n",compteurDebutWhile);} 
    t_AF                        {fseek(fichierASM,$1,SEEK_SET); 
                                 fprintf(fichierASM, "JMF %d %d\n",$3,compteurInstruction+2);
                                 fseek(fichierASM,0,SEEK_END); 
                                 printf("J'ai un while\n");}
  ;

Body:
    Declarations Instructions {printf("J'ai un body\n");}  
  ;

BodyIF:
     Declarations Instructions {printf("J'ai un body\n");}  
  |  Instructions {printf("J'ai un body\n");}
  ;

Declarations:
    Declaration {printf("J'ai trouvé une declaration\n");}
  | Declaration Declarations {printf("J'ai trouvé une autre declaration\n");}
  ;

Instructions:
    Instruction {printf("J'ai trouvé une Instruction\n");}
  | Instruction Instructions {printf("J'ai trouvé une autre Instruction\n");}
  ;

Declaration:
    t_INT t_ID {$$=$2;
         if(indexSymbole($2)!=-1){
            printf("Symbole déja ajouté\n");
         }
         else{printf("Symbole ajouté %s\n",$2);ajouterSymbole($2,0);}
         }
  | t_CONST Declaration {printf("J'ai trouvé une const\n");}
  | Declaration t_EQUAL t_DECIMALE {compteurInstruction++;
                                    printf("J'ai trouvé une déclaration avec valeur %s = %d\n",$1,$3);initialiserSymbole($1);
                                    printf("J'ajoute sa valeur à l'adresse %d\n",indexSymbole($1));
                                    printf("AFC %d %d\n",indexSymbole($1),$3);fprintf(fichierASM,"AFC %d %d\n",indexSymbole($1),$3);
                                    }
  | Declaration t_COMMA t_ID {printf("J'ai une autre déclarations dans cette ligne : %s\n",$3); $$=$3;
                                if(indexSymbole($3)!=-1){
                                    printf("Symbole déja ajouté\n");
                                 }
                                 else{printf("Symbole ajouté %s\n",$3);ajouterSymbole($3,0);}}
  | Declaration t_DC {printf("J'ai fini la ligne de déclarations\n");}
  ;

Instruction:
    t_PRINTF t_PO Expression t_PF t_DC {compteurInstruction++;
                                        printf("J'ai trouvé un printf de la valeur qui est à l'adresse %d\n",$3);
                                        fprintf(fichierASM,"PRI %d\n",$3);}
  | t_ID t_EQUAL Expression t_DC {compteurInstruction++;
                                  printf("J'ai trouvé un calcul sur l'ID %s\n",$1);
                                  printf("COP %d %d\n",indexSymbole($1),$3);
                                  fprintf(fichierASM,"COP %d %d\n",indexSymbole($1),$3);
                                  indexTemp=250;
                                  initialiserSymbole($1);
                                 }
  | If
  | While
  ;


  
SuiteIf:
    
    t_ELSE t_AO BodyIF t_AF {printf("J'ai un else\n");}
  | t_ELSE If {printf("J'ai un else if\n");}
  | {printf("J'ai fini le if\n");}
  ;

Condition : 
    Expression t_EQUAL t_EQUAL Expression {compteurInstruction++;printf("J'ai trouvé une condition egal egal\n");printf("EQU %d %d %d\n",indexTemp-=1,$1,$4);fprintf(fichierASM,"EQU %d %d %d\n",indexTemp,$1,$4);$$=indexTemp;}
  | Expression t_INF Expression  {compteurInstruction++;printf("J'ai trouvé une condition <\n");printf("INF %d %d %d\n",indexTemp-=1,$1,$3);fprintf(fichierASM,"INF %d %d %d\n",indexTemp,$1,$3);$$=indexTemp;}
  | Expression t_SUP Expression  {compteurInstruction++;printf("J'ai trouvé une condition >\n");printf("SUP %d %d %d\n",indexTemp-=1,$1,$3);fprintf(fichierASM,"SUP %d %d %d\n",indexTemp,$1,$3);$$=indexTemp;}
  | Expression t_INF t_EQUAL Expression  {printf("J'ai trouvé une condition <=\n");}
  | Expression t_SUP t_EQUAL Expression {printf("J'ai trouvé une condition >=\n");}
  ;

Expression:
    t_DECIMALE    {compteurInstruction++;printf("Decimale: %d\n",$1);
                   printf("AFC %d %d\n", indexTemp-=1,$1);fprintf(fichierASM,"AFC %d %d\n", indexTemp,$1);
                   $$=indexTemp;        
                  } 
  | t_ID    {printf("Id : %s\n",$1); 
               if(initialSymbole($1)){
                    $$=indexSymbole($1);
                    printf("La variable %s est initialisée\n",$1);
                    }
               else{
                    printf("La variable n'est pas initialisée calcul impossible\n");
               }
             } 
  | Expression t_PLUS Expression  {compteurInstruction++;printf("J'ai trouvé une addition \n");$$=indexTemp;printf("ADD %d %d %d\n",indexTemp,$1,$3);fprintf(fichierASM,"ADD %d %d %d\n",indexTemp,$1,$3);} 
  | Expression t_MINUS Expression {compteurInstruction++;printf("J'ai trouvé une soustraction\n");$$=indexTemp;printf("SOU %d %d %d\n",indexTemp,$1,$3);fprintf(fichierASM,"SOU %d %d %d\n",indexTemp,$1,$3);} 
  | Expression t_MUL Expression {compteurInstruction++;printf("J'ai trouvé une multiplication\n");$$=indexTemp;printf("MUL %d %d %d\n",indexTemp,$1,$3);fprintf(fichierASM,"MUL %d %d %d\n",indexTemp,$1,$3);} 
  | Expression t_DIV Expression {compteurInstruction++;printf("J'ai trouvé une division\n");$$=indexTemp;printf("DIV %d %d %d\n",indexTemp,$1,$3);fprintf(fichierASM,"DIV %d %d %d\n",indexTemp,$1,$3);} 
  | t_PO Expression t_PF  {printf("J'ai trouvé une exp entre parentheses\n");$$=indexTemp;} 
  ;

%%
int main(){ 
    return  yyparse(); 
}

int yyerror(char *s){ 
    fprintf(stderr,"%s\n",s); 
}
