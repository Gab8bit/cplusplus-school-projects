//Lanciare un dado

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(){
	int rip, n;
	srand(time(NULL));
	
	printf("Numero di lanci: ");
	scanf("%d", &rip);
	printf("\n\n");
	
	while(rip > 0){	
		
		n = rand() % 6 + 1; 
		printf("%d\n", n);
		
		rip = rip - 1;
	
	}


return 0;
}
