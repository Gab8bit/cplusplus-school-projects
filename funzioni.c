//Esempio di funzione

#include <stdio.h>

int somma(int a, int b);	//vanno dichiarati fuori dal 'main' solo se le funzioni stanno dopo del 'main'


int main(){
	int ris = 0;
	ris = somma(3, 7);
	printf("%d \n\n", ris);

return 0;
	
}



int somma(int a, int b){
	int c=0;
	c = a + b;
return c;	//restituisce il risultato nella variabile 'c' quanto termina la funzione
}
