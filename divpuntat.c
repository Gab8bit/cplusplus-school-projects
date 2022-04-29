//Scrivere una funzione che riceva come parametri due numeri interi A e B  e restituisca quoziente e resto della divisione a/b.

#include <stdio.h>
void divisione(int *a, int *b, int *res, float *ris);
int main(){
    int a, b, resto;
    float ris;
    printf("Inserisci due numeri: ");
    scanf("%d %d", &a, &b);
    divisione(&a, &b, &resto, &ris);
    printf("\n\nQuoziente: %.2f\nResto: %d\n\n", ris, resto);
    return 0;
}

void divisione(int *a, int *b, int *res, float *ris){
    *ris = *a / *b;
    *res = *a % *b;
}
