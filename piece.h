#include<stdio.h>
#include<stdlib.h>

typedef enum typepiece {
		VIDE,
		PION,
		CAVALIER,
		FOU,
		TOUR,
		DAME,
		ROI
} typepiece;

/* c contient l'info de la couleur (0 ou 1, 0 pour les noirs évidement) */
typedef struct piece {
		typepiece t;
		char c;
}
