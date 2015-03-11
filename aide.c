#include "aide.h"
#include <stdio.h>
#include <stdlib.h>

void aide(){

    char sortir[]={'c'};

    do{
        system("cls");
        printf("Pour commencer a jouer créer un nouveau pseudo et choisissez votre niveau. Vous pouvez a tout moment le modifier dans les options.\n");
        printf("Entrez c pour revenir au menu\n ");

        scanf("%1c", &sortir[0]);
        scanf("%*[^\n]");
        getchar();
    }while(sortir[0]!='c');

}
