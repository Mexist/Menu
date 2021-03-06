#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

#include "jeu.h"
#include "aide.h"
#include "option.h"



int main()
{
    Joueur joueur;
    int i = 0;
    for(i=0; i<PSEUDO_END_MARKER+1; i++) {
        joueur.pseudo[i]='\0';
    }

    printf("Hello!\n");
    int sortie=0;                                                                    //variable de sortie de menu actif quand !=0
    int choix=0;
    Sleep(650);

    //int option=0;

    do{                                                                         //d�but menu

            system("cls");

            printf("=== Menu ===\n\n"\
                   " 1_Jouer\n"\
                   " 2_Option\n"\
                   " 3_Aide\n"\
                   " 4_Quitter\n\n"\
                   "Votre choix: ");

            scanf("%1d",&choix);
            scanf("%*[^\n]");
            getchar();

            switch (choix){
                case 1:
                        system("cls");
                        printf("C'est parti!\n");
                        Sleep(650);
                        menu_jeu(&joueur);
                        choix=0;
                        break;
                case 2:
                        system("cls");
                        printf("===Option:===\n");
                        Sleep(650);
                        option(&joueur);
                        choix=0;
                        break;
                case 3:
                        system("cls");
                        printf("===Aide===\n");
                        Sleep(400);
                        aide();
                        choix=0;
                        break;
                case 4:
                        system("cls");
                        printf("Bye");
                        Sleep(200);
                        sortie=1;
                        break;
                default:
                        break;
            }

    }while(sortie==0);
    return 0;
}
