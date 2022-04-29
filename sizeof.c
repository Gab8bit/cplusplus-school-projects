//Verificare la dimensione in byte delle variabili int, float, double e char.

#include <stdio.h>
int main(){
    int a;
    float b;
    double c;
    char d;
    printf("\nSize of int variables:\t\t%ld byte\nSize of float variables:\t%ld byte\nSize of double variables:\t%ld byte\nSize of char variables:\t\t%ld byte\n\n", sizeof(a), sizeof(b), sizeof(c), sizeof(d));
    return 0;
}
