//Calcolare area e perimetro di un rettangolo

#include <stdio.h>

int main(){
	//dichiarazione variabili
	float base, alt, per, area;
	
	printf("Inserisci la base: ");
	scanf("%f", &base);
	printf("\nInserisci l'altezza: ");
	scanf("%f", &alt);
	area = base * alt;
	per = (2 * base) + (2 * alt);
	printf("\n\nL'area e' %f \n", area);
	printf("Il perimetro e' %f \n\n", per);
	
	
return 0;
}
