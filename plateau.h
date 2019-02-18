#include"piece.h"
#include"set_coord.h"
#define echec(boole) boole&1
#define rocn(boole) boole&2
#define rocb(boole) boole&4

/* struture qui contient les
 * pieces au cours de la partie
 * rn et rb indiquent les coordonnées des rois
 * booleens contient 3 bouleens sur ses bits de poids faible
 * 	- le 1 contient l'info de si c'est en échec;
 * 	- le 2 dit si le roc noir est possible
 * 	- le 4 dit sir le roc blanc est possible
 */
typedef struct plateau {
		char [8][8] jeu;
		coord rn, rb;
		char booleens;
} plateau;

/* les blancs sont en bas */
plateau init();

void print_plateau(plateau p);

