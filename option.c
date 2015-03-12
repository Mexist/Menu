#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "option.h"

void option(PJoueur joueur){                                                    //Option dans Menu principal
    int sortie=0;
    int choix=0;
    do{                                                                         //Choix skill
            system("cls");
            printf("Niveau de skill:\n"\
                    " 1_Eleve\n"\
                    " 2_Moyen\n"\
                    " 3_Faible\n\n"\
                    " 4_Retour\n\n");
            printf("Votre choix:");

            scanf("%1d",&choix);
            scanf("%*[^\n]");
            getchar();

            switch (choix){
                case 1:
                        joueur->option=0;
                        choix=0;
                        break;
                case 2:
                        joueur->option=0;
                        choix=0;
                        break;
                case 3:
                        joueur->option=1;
                        choix=0;
                        break;
                case 4:
                        system("cls");
                        Sleep(200);
                        sortie=1;
                        break;
                default:
                        break;
            }

    }while(sortie==0);

}
