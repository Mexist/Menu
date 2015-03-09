#ifndef JEU_H_INCLUDED
#define JEU_H_INCLUDED

#define PSEUDO_END_MARKER 10

typedef struct joueur {
    char pseudo[PSEUDO_END_MARKER+1];
    int score;
    int option;
} Joueur;
typedef Joueur* PJoueur;

void presentation(PJoueur joueur);
void shifumi(PJoueur joueur);
void menu_jeu(PJoueur joueur);

#endif // JEU_H_INCLUDED
