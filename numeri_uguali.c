//Genera dei numeri uguali ad ogni esecuzione.
#include <stdlib.h>
#include <stdio.h>

int main(){
	long int num, count;
	
	printf("Numeri da generare: ");
	scanf("%ld", &count);
	printf("\n");
	
	while(count > 0){
	
	num = rand();
	
	printf("%ld \n", num);
	
	count = count - 1;
};
	printf("\n\n");
	
return 0;
}
