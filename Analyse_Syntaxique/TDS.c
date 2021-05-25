#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "TDS.h"

typedef struct ligne{
    char nom[16];
    int init;
}ligne;

ligne TDS[128];

indice=0;

void ajouterSymbole(char * nomS,int initS){
    if(strlen(nomS)>16)
    {
        printf("Nom de symbole trop grand\n");
    }else{
    strcpy(TDS[indice].nom,nomS);
    TDS[indice].init=initS;
    indice++;}
}

int indexSymbole(char * nomS){  
    for(int i=0;i<indice;i++)
    {
        if((strcmp(TDS[i].nom,nomS)==0))
        {
            return i;
        }
    }
    return -1;
}
int initialSymbole(char * nom){
    return TDS[indexSymbole(nom)].init;
}

void initialiserSymbole(char * nomS){
    for(int i=0;i<indice;i++)
    {
        if((strcmp(TDS[i].nom,nomS)==0))
        {
            TDS[i].init=1;
        }
    }
}

/*int main(){

    ajouterSymbole("a",1);
    ajouterSymbole("b",0);
    int ib = indexSymbole("b");
    printf("%d",ib);
}*/
