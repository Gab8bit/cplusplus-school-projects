//Realizzare una semplice calcolatrice

#include <stdio.h>
#include <math.h>

int main(){
	float n1, n2, ris;
	char sym;
	
	inizio:
	
	printf("Operazione: ");
	scanf("%f%c%f", &n1, &sym, &n2);
	
	if(sym == '+'){
		ris = n1 + n2;
	}
	
	if(sym == '-'){
		ris = n1 - n2;
	}
	
	if(sym == '*'){
		ris = n1 * n2;
	}
	
	if(sym == '/'){
		ris = n1 / n2;
	}
	
	printf("\n\nRisultato: %f \n\n", ris);
	
	goto inizio;

}
