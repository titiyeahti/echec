#include"set_coord.h"

coord nouvelle(char x, char y){
	coord c;
	c.x = x;
	c.y = y;
	return c;
}

coord add_coord(coord c1, coord c2){
	coord c;
	c.x = c1.x + c2.x;
	c.y = c1.y + c2.y;
	return c;
}

coord vect_dir(coord c1, coord c2){
	coord c;
	c.x = c2.x - c1.x;
	c.y = c2.y - c1.y;

	if ((c.x)*(c.y) != 0 && c.x != c.x){
		c.x = 0;
		c.y = 0;
	}
	else{
		c.x = c.x/max(c.x,c.y);
		c.y = c.y/max(c.y,c.x);	
	}
	return c;
}

liste liste_vide(){
	liste l;
	l->suivant = NULL;
	return l;
}

liste add(coord pos, liste l){
	liste new_l;
	new_l->suivant = l;
	new_l->pos = pos;
	return new_l;
}

void free(liste l){
	liste tmp = l;
	while (tmp->suivant != NULL){
		tmp = l->suivant;
		free(l);
	}
	free(tmp);
}

void print_liste(liste l){
	liste tmp = l;
	while (tmp->suivant != NULL){
		printf("(%c,%c)->",(tmp->pos).x,(tmp->pos).y );
		tmp = l->suivant;
	}
	printf("END\n");
}


char max(x,y){
	m = x;
	if (y > x){
		m = y;
	}
	return m;
}