//Leggere l'eta' di una persona e visualizzare se e' minorenne o maggiorenne

#include <stdio.h>

int main(){
	int eta;
	
	printf("Inserisci l'eta': ");
	scanf("%d", &eta);
	
	if(eta >= 18){
		printf("\nLa persona e' maggiorenne\n\n");
	}else printf("\nLa persona e' minorenne\n\n");
	
return 0;
}
