//Trovare il perimetro e la base di un rettangolo

#include <stdio.h>

int main(){
	float h, b, p, a;
	
	printf("Inserire l'altezza: ");
	scanf("%f", &h);
	printf("\nInserire la base: ");
	scanf("%f", &b);
	
	p = (2*h)+(2*b);
	a = b*h;
	
	printf("\n\nIl perimetro e' %f \nL'area e' %f\n\n\n", p, a);



return 0;
}
