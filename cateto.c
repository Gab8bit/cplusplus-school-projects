/* Leggere da tastiera la misura del cateto di un triangolo rettangolo, il secondo cateto e' i 3/5 del primo.
Calcolare l'area e il perimetro del triangolo rettagolo.
Visualizzare su video il perimetro e l'area preceduti da messaggi */

#include <stdio.h>
#include <math.h>

int main(){
	float c1, c2, area, per, ipo;
	
	printf("Inserisci la lunghezza del cateto: ");
	scanf("%f", &c1);
	
	c2 = c1 * (3/5);
	ipo = sqrt(c1 * c1 + c2 * c2);
	area = (c1 * c2) / 2;
	per = c1 + c2 + ipo;
	
	printf("\nIl perimetro e' %f", per);
	printf("\nL'area e' %f \n\n", area);



return 0;
}

//non va
