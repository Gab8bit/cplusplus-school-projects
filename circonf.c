//Calcolare la circonferenza partendo dal raggio.

#include <stdio.h>
#include <math.h>

const float p = 3.14;

float circonferenza(float r){
    float c;
    c = (p * 2) * r;
    return c;
}

float area(float r){
    float ris;
    ris = pow(r, 2) * p;
    return ris;
}


int main(){
    float r, ar, c;
    printf("Raggio: ");
    scanf("%f", &r);
    c = circonferenza(r);
    ar = area(r);
    printf("\nLa circonferenza e' %.2f", c);
    printf("\nL'area e' %.2f\n\n", ar);
}
