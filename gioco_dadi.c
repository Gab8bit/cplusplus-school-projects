//Giocare a dadi contro il computer

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(){
	int n1, n2, nai1, nai2, conf;
	srand(time(NULL));
	
	inizio:
	
	n1 = rand() % 6 + 1; 
	n2 = rand() % 6 + 1; 
	nai1 = rand() % 6 + 1; 
	nai2 = rand() % 6 + 1; 
	
	printf("I tuoi numeri: %d | %d", n1, n2);
	printf("\nI numeri del computer: %d | %d", nai1, nai2);
	
	if(n1 == n2){
		printf("\n\nHai vinto!\n\n");
	}else {
		printf("\n\nHai perso, vuoi riprovare? (1= si, ctrl^c= no) ");
		scanf("%d", &conf);
		if (conf = 1){
			printf("\n\n");
			goto inizio;
		}
		
	}


return 0;
}
