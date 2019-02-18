#include"include.h"

char nouvelle_piece(char t, char c)
{
		char p = t<<1 + c;
		return p;
}

char carac(char t)
{
		switch (p) {
				case VIDE :
						return ' ';
						break;
				case PION2CASE :
						return '.';
						break;
				case PION :
						return 'P';
						break;
				case TOUR :
						return 'T';
						break;
				case CAVA :
						return 'C';
						break;
				case FOU :
						return 'F';
						break;
				case DAME :
						return 'D';
						break;
				case ROI :
						return 'R';
						break;
				default :
						return 'E';
						break;
		}
}

void print_piece(char p)
{
		char c = p&1;
		char t = p>>1;
		printf("|%c|%i|\n", carac(t), c);
}
