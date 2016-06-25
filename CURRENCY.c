#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#define D 14.9200286
#define E 16.5880878
#define G 20.41255

int DOLARP ();
int PESOSD ();
int EUROP ();
int PESOSE ();
int LIBRASP ();
int PESOSL ();

int main ()	{
	int flag = 0, DEC, i;
	
	while (flag == 0)	{
		system ("cls");
	
		printf ("PESOS AR --> DOLAR  (1)\t\tDOLAR  --> PESOS AR  (4)\nPESOS AR --> EURO   (2)\t\tEURO   --> PESOS AR  (5)\tCURRENCY DATE: 24/6/2016\nPESOS AR --> LIBRAS (3)\t\tLIBRAS --> PESOS AR  (6)\n\nOption: ");
		do	{
			scanf ("%d", &DEC);
			fflush (stdin);
			i = isalpha (DEC);
		}	while (((DEC < 1) || (DEC > 6)) && (i == 0));
		
		system ("cls");
		switch (DEC)	{
			case 1:
				flag = PESOSD ();
				break;
			
			case 4:
				flag = DOLARP ();
				break;
				
			case 5:
				flag = EUROP ();
				break;
			
			case 2:
				flag = PESOSE ();
				break;
				
			case 6:
				flag = LIBRASP ();
				break;
				
			case 3: 
				flag = PESOSL ();
				break;
		}
	}
	
	system ("cls");
	system ("pause");
}

int DOLARP ()	{
	float d;
	char K;

	printf ("DOLAR A PESOS AR\nPrice: ");
	do	{
		scanf ("%f", &d);
		fflush (stdin);
	}	while (d < 0);
	
	printf ("\n$%.2f", d * D);
	
	printf ("\n\nAgain? (Y/N): ");
	do	{
		scanf ("%c", &K);	
		fflush (stdin);
		tolower (K);
	}	while ((K != 'y') && (K != 'n'));
	
	if (K == 'y')	{
		return 0;
	} else	{
		return 1;
	}
}

int PESOSD ()	{
	float p;
	char K;
	
	printf ("PESOS AR --> DOLAR\nPrice: ");
	
	do	{
		scanf ("%f", &p);
		fflush (stdin);
	}	while (p < 0);
	
	printf ("\n$%.2f", p/D);
	
		printf ("\n\nAgain? (Y/N): ");
	do	{
		scanf ("%c", &K);	
		fflush (stdin);
		tolower (K);
	}	while ((K != 'y') && (K != 'n'));
	
	if (K == 'y')	{
		return 0;
	} else	{
		return 1;
	}
}

int EUROP ()	{
	float p;
	char K;
	
	printf ("EURO --> PESOS AR\nPrice: ");
	
	do	{
		scanf ("%f", &p);
		fflush (stdin);
	}	while (p < 0);
	
	printf ("\n$%.2f", p * E);
	
	printf ("\n\nAgain? (Y/N): ");
	do	{
		scanf ("%c", &K);	
		fflush (stdin);
		tolower (K);
	}	while ((K != 'y') && (K != 'n'));
	
	if (K == 'y')	{
		return 0;
	} else	{
		return 1;
	}
}

int PESOSE ()	{
	
	float p;
	char K;
	
	printf ("PESOS AR --> EURO\nPrice: ");
	
	do	{
		scanf ("%f", &p);
		fflush (stdin);
	}	while (p < 0);
	
	printf ("\n$%.2f", p/E);
	
	printf ("\n\nAgain? (Y/N): ");
	do	{
		scanf ("%c", &K);	
		fflush (stdin);
		tolower (K);
	}	while ((K != 'y') && (K != 'n'));
	
	if (K == 'y')	{
		return 0;
	} else	{
		return 1;
	}
}

int LIBRASP ()	{
	float p;
	char K;
	
	printf ("LIBRAS --> PESOS AR\nPrice: ");
	do	{
		scanf ("%f", &p);
		fflush (stdin);
	}	while (p < 0);
	
	printf ("\n$%.2f", p * G);
	
	printf ("\n\nAgain? (Y/N): ");
	do	{
		scanf ("%c", &K);	
		fflush (stdin);
		tolower (K);
	}	while ((K != 'y') && (K != 'n'));
	
	if (K == 'y')	{
		return 0;
	} else	{
		return 1;
	}
}

int PESOSL ()	{
	int i;
	float p;
	char K;
	
	printf ("PESOS AR --> LIBRAS\nPrice: ");
	
	do	{
		scanf ("%f", &p);
		fflush (stdin);
	}	while (p < 0);
	
	
	printf ("\n$%.2f", p / G);
	
	printf ("\n\nAgain? (Y/N): ");
	do	{
		scanf ("%c", &K);	
		fflush (stdin);
		tolower (K);
	}	while ((K != 'y') && (K != 'n'));
	
	if (K == 'y')	{
		return 0;
	} else	{
		return 1;
	}
}
