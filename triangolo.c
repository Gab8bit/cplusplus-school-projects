//Trovare il perimetro e l'area di un Triangolo

#include <stdio.h>
#include <math.h>

int main(){
	float c1, c2, p, a, c3;
	
	printf("Inserire il primo cateto: ");
	scanf("%f", &c1);
	printf("\nInserire il secondo cateto: ");
	scanf("%f", &c2);
	
	c3 = sqrt((pow(c1, 2) + pow(c2, 2)));
	p = c1 + c2 + c3;
	a = (c1*c2)/2;
	
	printf("\n\nIl perimetro e' %f\nL'area e' %f\n\n\n", p, a);


return 0;
}
