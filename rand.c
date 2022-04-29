//Genera numeri casuali infiniti da 30 a 100. 

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(){
	int n, i;
	srand(time(NULL));
	
	for(i = 0; 1 <= 10; i++){	//i++ = forma contratta di 'i = i + 1'
		
		n = rand() % 70 + 30; //genera un numero da 30 a 100 (70+30 = 100)
		printf("%d\n", n);
	
	}


return 0;
}


/*
n = rand() % 70 + 30
	     |     |
	    max*  min

*il numero massimo si calcola con la somma tra min e max (70+30 = 100 --> numero massimo 100).


il numero che metto dopo il '+' devo sotrrarlo a quello prima.
Es.: se scrivo 30 dopo il '+' (numero minimo), allora devo sottrarre 30 al numero prima del '+' (numero massimo).

Il numero massimo e' la somma tra il primo e il secondo numero dopo '%'.
*/ 
