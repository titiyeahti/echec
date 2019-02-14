#include"plateau.h"

liste liste_coups(coord c, plateau p);

plateau deplacement(coord depart, coord cible, plateau p);

/* empeche le joueur de se suicider
 * algo :
 * attention direction
 * la piece choisie est-elle adjacente eu roi sur une ligne ou une diagonale
 * 		si oui : on cherche le premier obstacle sur la ligne resp diago libérée ...
 */
char coup_suicide(coord depart, coord cible, plateau p);

/* indique si le coup met l'adversaire en echec
 * le plateau sera mis à jour dans la fct deplacement(d, c, p)
 * algo : on regarde les nouvelles cases attaquées par la pièce ainsi que les 
 * attaques permise par une libération de ligne ou diago
 */
char echec(coord depart, coord cible, plateau p);


