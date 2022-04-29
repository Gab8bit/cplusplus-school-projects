//Contare le coppie di numeri uguali

#include <stdio.h>
int main(){
	int k, n, cop=0, count=0, val1, val2;
	
	printf("Inserisci il valore da comparare: ");
	scanf("%d", &k);
	printf("\nInserite le coppie da controllare: ");
	scanf("%d", &n);
	while(count < n){
		count = count + 1;
		printf("\nInserisci il primo valore: ");
		scanf("%d", &val1);
		printf("\nInserisci il secondo valore: ");
		scanf("%d", &val2);
		if(val1 * val2 == k){
			cop = cop + 1;
		}
	}
	printf("Il numero di coppie è %d\n\n", cop);


return 0;
}
