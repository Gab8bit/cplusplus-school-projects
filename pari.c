//Verificare se il numero inserito e' paro o disparo.

#include <stdio.h>

int main(){
	int n;
	
	printf("Numero: ");
	scanf("%d", &n);
	
	if(n%2 == 0){
		printf("\n\nIl numero %d e' pari\n\n\n", n);
	} else printf("\n\nIl numero %d e' dispari\n\n\n", n);

return 0;
}
