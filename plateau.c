#include"plateau.h"

plateau init(){
		plateau pl;
		pl.rn = nouvelle_coord(0, 4);
		pl.rb = nouvelle_coord(7, 4);
		pl.echec = 0;
		pl.rocn_dispo = 1;
		pl.rocb_dispo = 1;
		int i, j;
		for (i=0; i<8; i++)
		{
				if (i==1 || i ==6)
				{
						/* si i est pair, c'est les blancs */
						char couleur = !(1&i);
						piece p = nouvelle_piece(PION, couleur);
						for(j=0; j<8; j++)
						{
								pl.jeu[i][j] = p;
						}
				}
				else if (i==0 || i == 7)
				{
						/* si i est pair, c'est les noirs */
						char couleur = (1&i);
						pl.jeu[i][0] = nouvelle_piece(TOUR, couleur);
						pl.jeu[i][7] = nouvelle_piece(TOUR, couleur);

						pl.jeu[i][1] = nouvelle_piece(CAVALIER, couleur);
						pl.jeu[i][6] = nouvelle_piece(CAVALIER, couleur);

						pl.jeu[i][2] = nouvelle_piece(FOU, couleur);
						pl.jeu[i][5] = nouvelle_piece(FOU, couleur);

						pl.jeu[i][3] = nouvelle_piece(DAME, couleur);
						pl.jeu[i][4] = nouvelle_piece(ROI, couleur);
				}
				else
				{
						for(j=0; j<8; j++)
						{
								pl.jeu[i][j] = nouvelle_piece(VIDE, 2);
						}
				}
		}
		return pl;
}


void print_plateau(plateau p)
{
	int i,j;
	int m,n = 0;
	for (i = 0; i < 17; ++i)
	{
		printf("|");
		for (j = 1; j < 32; ++j)
		{
			if !(1&i){
				printf("-");
			}
			else
			{
				if (1&j)
				{
					printf(" ");
				}
				else if (j%4 == 0){
					printf("|");
				}
				else {
					switch (p.jeu[m][n].t)
					{
						case VIDE :
							printf(" ", );							
							break;

						case PION :
							printf("P", );
							break;

						case CAVALIER :
							printf("C", );
							break;

						case FOU :
							printf("F", );
							break;

						case TOUR :
							printf("T", );
							break;

						case DAME :
							printf("D", );
							break;

						case ROI :
							printf("R", );
							break;
					}
					n++;
				}
			}
			
		}
		printf("|\n");
		if !(1&i){
			m++;
		}	
	}
}


0012345678901234567890123456789012
0|--------------------
1| T | C | F | D | R | F | C | T |
2|--------------------
3| P | P | P | P | P 
4|-
5|
6|-
7|
8|-
9|
0|-
1|
2|-
3|
4|-
5|
6|-