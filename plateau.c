#include"plateau.h"

plateau init(){
		plateau pl;
		pl.rn = nouvelle_coord(0, 4);
		pl.rb = nouvelle_coord(7, 4);
		pl.booleens = 6;
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


