//Scrivere 3 cifre (centinaia, decine e unita') e salvare il numero in una variabile intera.

#include <stdio.h>

int main(){
	int c, d, u, ris;
	
	printf("Inserisci la cifra delle centinaia: ");
	scanf("%d", &c);
	printf("\nInserisci la cifra delle decine: ");
	scanf("%d", &d);
	printf("\nInserisci la cifra delle unita': ");
	scanf("%d", &u);
	
	c = c * 100;
	d = d * 10;
	ris = c + d + u;
	
	printf("\n\nRisultato: %d\n\n\n", ris);

return 0;
}
