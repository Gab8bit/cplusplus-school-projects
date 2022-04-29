//Calcolare il prezzo scontato e lo sconto applicato partendo dal prezzo iniziale del prodotto e dalla percentuale di sconto.

#include <stdio.h>

int main(){
	float prezzo, sconto_perc, p_scontato, sconto;
	
	printf("Inserire il prezzo iniziale del prodotto: ");
	scanf("%f", &prezzo);
	printf("\nInserire la percentuale di sconto: ");
	scanf("%f", &sconto_perc);
	
	p_scontato = (prezzo / 100) * sconto_perc;
	sconto = prezzo - p_scontato;
	
	printf("\n\nIl prezzo scontato e' %f euro", p_scontato);
	printf("\nLo sconto applicato e' di %f euro\n\n\n", sconto);



return 0;
}
