#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "jeu.h"

void presentation(PJoueur joueur){
    int i;
    for(i=0; i<PSEUDO_END_MARKER+1; i++) {
        joueur->pseudo[i]='\0';
    }

    printf("Commençons les présentations\n");

    printf("Entrez votre pseudo(10 caracteres max):");
    scanf("%10s", joueur->pseudo);
    scanf("%*[^\n]");
    getchar();

    printf("Votre pseudo est: %s", joueur->pseudo);


int choix_skill=0;
    do{system("cls");
    printf("Choisissez votre niveau de skill:\n"\
           "1_Eleve\n"\
           "2_Moyen\n"\
           "3_Faible\n"\
           "Votre choix est: "
           );
    scanf("%d",&choix_skill);

    switch(choix_skill){
        case 1: choix_skill=1;
                joueur->option=0;
                break;
        case 2: choix_skill=2;
                joueur->option=0;
                break;
        case 3: choix_skill=3;
                joueur->option=1;
                break;
        default: choix_skill=0;
                break;
    }
    }while(choix_skill==0);

    if(choix_skill==3)
        printf("Ne vous découragez pas");

    else if (choix_skill==2)
        printf("Ah bon!");
            else
                printf("Je vous recommande le mode impossible");
}


void shifumi(PJoueur joueur){
    int choix_shifumi;
    int sortie=0;
    if(joueur->option==0){
          do{
                system("cls");
                printf("===SHIFUMI===\n"\
                   "1_Pierre\n"\
                   "2_Papier\n"\
                   "3_Ciseaux\n"\
                   "4_Retour\n\n"\
                   "Choix ordinateur effectue.\n\n"\
                   "Votre choix:");
            scanf("%d",&choix_shifumi);
            system("cls");


            switch (choix_shifumi){
                case 1:
                        printf("Le papier enveloppe la pierre\n");
                        joueur->score=joueur->score-10;
                        printf("Votre score: %d\n", joueur->score);
                        Sleep(800);
                        break;
                case 2:
                        printf("Les ciseaux coupent le papier\n");
                        joueur->score-=10;
                        printf("Votre score: %d\n", joueur->score);
                        Sleep(800);
                        break;
                case 3:
                        printf("La pierre casse les ciseaux\n");
                        joueur->score-=10;
                        printf("Votre score: %d\n", joueur->score);
                        Sleep(800);
                        break;
                case 4:
                        system("cls");
                        Sleep(200);
                        sortie=1;
                default:
                        break;
            }
        }while(sortie==0);

    }
}

void menu_jeu(PJoueur joueur){
    int sortie=0;
    int choix_menu_jeu=0;
    joueur->score=0;

    do{                                                                         //début menu
            system("cls");
            printf("Bienvenue %s.        ", joueur->pseudo);
            printf("Votre score: %d\n\n", joueur->score);
            printf("===Menu de Jeu===\n"\
                   "1_Nouveau\n"\
                   "2_Shifumi\n"\
                   "3_Retour\n"\
                   "Votre choix:");
            scanf("%d",&choix_menu_jeu);
            system("cls");


            switch (choix_menu_jeu){
                case 1:
                        system("cls");
                        presentation(joueur);
                        Sleep(650);
                        break;
                case 2:
                        system("cls");
                        shifumi(joueur);
                        Sleep(650);
                        break;
                case 3:
                        system("cls");
                        Sleep(200);
                        sortie=1;
                        break;
                default:
                        break;
            }

    }while(sortie==0);

}
