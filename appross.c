//Eseguire il valore assoluto, la radice quadrata, l'approssimazione per difetto ed eccesso di un numero inserito da tastiera

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    
    float n, rq;
	int va, ad, ae, rip;
	rip = 0;
    
    while(rip = 1){
	
	printf("Numero: ");
	scanf("%f", &n);
	
	//valore assoluto
	va = abs(n);
	
	//radice quadrata
	rq = sqrt(n);
	
	//approssimazione per difetto
	ad = floor(n);
	
	//approssimazione per eccesso
	ae = ceil(n);
	
	
	printf("\n\nIl valore assoluto è %d", va);
	printf("\nLa radice quadrata è %f", rq);
	printf("\nL'approssimazione per difetto è %d", ad);
	printf("\nL'approssimazione per eccesso è %d", ae);
	printf("\n\n\n  ---------------------------\n\n");
}

return 0;	
}
