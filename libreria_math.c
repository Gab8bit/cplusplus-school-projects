// Legge un numero intero e due numeri con la virgola e utilizzare tutte le funzioni della libreria math.h

#include <stdio.h>
#include <math.h>

int main(){
	int a=0, ass=0;
	float b=0, c=0, asr=0, asr1=0, cel=0, cel1=0, flr=0, flr1=0, pw=0, radq=0, radq1=0, radqint=0;
	
	printf("Inserisci un numero intero: ");
	scanf("%d", &a);
	printf("\nInserisci un numero reale: ");
	scanf("%f", &b);
	printf("\nInserisci un numero reale: ");
	scanf("%f", &c);
	
	ass = abs(a);
	printf("\n\nIl valore assoluto di %d e' %d", a, ass);
	
	asr = fabs(b);
	printf("\nIl valore assoluto di %f e' %f", b, asr);
	
	asr1 = fabs(c);
	printf("\nIl valore assoluto di %f e' %f", c, asr1);
	
	cel = ceil(b);
	printf("\nL'approssimazione per eccesso di %f e' %f", b, cel);
	
	cel1 = ceil(c);
	printf("\nL'approssimazione per eccesso di %f e' %f", c, cel1);
	
	flr = floor(b);
	printf("\nL'approssimazione per difetto di %f e' %f", b, flr);
	
	flr1 = floor(c);
	printf("\nL'approssimazione per difetto di %f e' %f", c, flr1);
	
	pw = pow(a, b);
	printf("\nLa potenza di %f elevato a %f e' %f", b, c, pw);
	
	radqint = sqrt(a);
	printf("\nLa radice quadrata di %d e' %f", a, radqint);
	
	radq = sqrt(b);
	printf("\nLa radice quadrata di %f e' %f", b, radq);
	
	radq1 = sqrt(b);
	printf("\nLa radice quadrata di %f e' %f", b, radq1);
	
	printf("\n\n\n");
	

return 0;
}
