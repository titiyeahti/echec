#ifndef
#include"piece.h"
#include"set_coord.h"
#include<stdio.h>
#include<stdlib.h>

/* struture qui contient les
 * pieces au cours de la partie
 * rn et rb indiquent les coordonnées des rois
 * echec indique si le joueur courant est en echec
 */
typedef struct plateau {
		piece [8][8] jeu;
		coord rn, rb;
		char echec;
		char rocn_dispo, rocb_dispo;
} plateau;

plateau init();

void print_plateau(plateau p);

#endif
