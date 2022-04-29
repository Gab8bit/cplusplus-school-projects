//Scambiare i valori di due variabili utilizzando il passaggio per indirizzo.

#include <stdio.h>

int scambia(int *a, int *b){
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int x=20, y=30;

    scambia(&x, &y);
    printf("\nVariabile X: %d\n\n", x);
    printf("\nVariabile Y: %d\n\n", y);
    return 0;
}
