//Verificare se due numeri sono divisibili per 5

#include <stdio.h>

int main(){
	int n1, n2;
	
	printf("Primo Numero: ");
	scanf("%d", &n1);
	printf("\nSecondo Numero: ");
	scanf("%d", &n2);
	
	if((n1%5 == 0) && (n2%5 == 0)){
		printf("\n\nI numeri sono divisibili per 5\n\n\n");
	}else printf("\n\nI numeri non sono divisibili per 5\n\n\n");



return 0;
}
