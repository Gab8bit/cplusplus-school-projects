//Simulare il lancio di una moneta con due facce

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
	int faccia;
	
	srand(time(NULL));
	
	faccia = rand() % 2;
	
	if(faccia == 0){
		printf("\nTesta");
	}else printf("\nCroce");
	
	printf("\n\n");

return 0;
}
