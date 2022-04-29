//Calcolare la dimensione del lavorato finale partendo dalla dimensione del semilavorato grezzo e dal numero di laminatoi.

#include <stdio.h>
int main(){
	int lam;
	float spess, sp_f, sp;
	
	printf("Inserisci lo spessore del semilavorato grezzo: ");
	scanf("%f", &spess);
	printf("Inserisci il numero di laminatoi: ");
	scanf("%d", &lam);
	while(lam > 0){
		sp = (spess / 100) * 10;	//valore  da sottrarre
		sp_f = spess - sp;		//valore sottratto, spessore finale
		lam = lam - 1;
	}
	printf("\nLo spessore del laminato finale è di %f \n\n\n", sp_f);


return 0;
}
