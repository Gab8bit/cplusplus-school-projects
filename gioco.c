//indovina il numero e scrivere se quello inserito dall'utente e' piu' grande o piu' piccolo.

#include <stdlib.h>
#include <stdio.h>
#include <time.h>


int main(){
	int nutente, n, max, min, max_rand;
	
	//scegli i numeri
	printf("Inserisci il numero massimo: ");
	scanf("%d", &max);
	printf("\nInserisci il numero minimo: ");
	scanf("%d", &min);

	srand(time(NULL));
	
	max_rand = max - min;
	n = rand() % max_rand + min;
	
	input:
	
	printf("\nIndovina il numero da %d a %d: ", min, max);
	scanf("%d", &nutente);
	
	if(nutente < n){
		printf("\n\nTroppo piccolo, pero' ci sei quasi...");
		goto input;
	}
	
	if(nutente > n){
		printf("\nTroppo grande, pero' ci sei andato vicino...");
		goto input;
	}
	
	
	if(nutente = n){
		printf("\n\n\nBravo, hai indovinato!\nIl numero era %d\nComplimenti!\n\n\n", n);
	}


return 0;
}

