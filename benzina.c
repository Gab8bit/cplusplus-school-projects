//Trovare il costo della benzina a partire dalla distanza da percorrere

#include <stdio.h>

int main(){
	float distanza, cost_l, cost_t=0;
	
	printf("Inserisci la distanza da percorrere: ");
	scanf("%f", &distanza);
	printf("\nInserisci il costo per litro: ");
	scanf("%f", &cost_l);
	
	cost_t = (cost_l*distanza)/20;
	
	printf("\n\nIl costo totale per percorrere %f km e' %f\n\n\n", distanza, cost_t);



return 0;
}
