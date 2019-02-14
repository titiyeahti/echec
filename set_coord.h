/* permet de stocker l'ensemble despoint ateignables par une piece */

typedef coord {
		char x, y;
} coord;

struct maillon {
		coord pos;
		struct maillon * suivant;
};

typedef maillon * liste;

coord nouvelle(char x, char y);

coord add_coord(coord c1, coord c2);

/* renvoie un vecteur de ligne ou de diagonale 
 * si pas sur une ligne ou diago renvoie !!(0, 0)!!
 */
coord vect_dir(coord c1, coord c2);

liste liste_vide();

liste add(coord pos, liste l);

void free(liste l);

void print_liste(liste l);
