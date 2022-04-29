//approssimare un numero reale letto da tastiera al numero intero piu' prossimo.

#include <stdio.h>
#include <math.h>

int approssima(float n){
    int ris, floattoint;
    float num;

    floattoint = n;
    num = n - floattoint;

    if(num < 0.5){
        ris = floor(n);
    }else if(num >= 0.5){
        ris = ceil(n);
    }
    
    return ris;
}

int main(){
    float n;
    int r;
    printf("Numero da approssimare: ");
    scanf("%f", &n);
    r = approssima(n);
    printf("\nNumero approssimato: %d\n\n", r);

    return 0;
}
