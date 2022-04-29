//Verificare se e' possibile semplificare il numeratore e denominatore di una frazione. Ritorna 1 se vero, 0 se falso.

#include <stdio.h>

int semplifica(int n, int d){
    int ris = 0, divisore = 2, maggiore;

    //numero piu' alto per evitare il loop
    if(n > d){
        maggiore = n;
    }else maggiore = d;

    while(ris == 0){
        if((n % divisore == 0)&&(d % divisore == 0)){
            ris = 1;
        }else ++divisore;

        if(divisore == maggiore){
            ris = 2;
        }
    }

    return ris;
}

int main(){
    int n, d, r;
    printf("Numeratore: ");
    scanf("%d", &n);
    printf("\nDenominatore: ");
    scanf("%d", &d);
    r = semplifica(n, d);
    if(r == 2){
        r = 0;
    }
    printf("\n%d\n\n", r);

    return 0;

}