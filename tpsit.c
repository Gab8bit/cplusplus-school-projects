//Leggere centinaia, decine e unita' e salvare il numero in una variabile intera.

#include <stdio.h>

char legginum(){
    char c;
    do{
        scanf("%c", &c);
    }while((c < 48)||(c > 57));

    return c;
}

int calcnum(char c, char d, char u){
    int num;
    c = c - 48;
    d = d - 48;
    u = u - 48;
    num = (c * 100) + (d * 10) + u;

    return num;
}

int main(){
    char c, d, u;
    int num;
    printf("Centinaia: ");
    c = legginum();
    printf("Decine: ");
    d = legginum();
    printf("Unita': ");
    u = legginum();
    num = calcnum(c, d, u);
    printf("\n%d\n\n", num);

    return 0;
}
