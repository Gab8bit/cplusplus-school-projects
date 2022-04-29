/* Leggere da tastiera un numero D e calcolare:
- Area quadrato di lato D
- Area del cerchio di diametro D
- Area del triangolo equilatero di lato D */

#include <stdio.h>

float quadrato(float d);
float cerchio(float d);
float triangolo(float d);

int main(){
    float d, q, c, t;
    printf("Numero: ");
    scanf("%f", &d);
    q = quadrato(d);
    c = cerchio(d);
    t = triangolo(d);
    printf("\nArea del quadrato: %.2f", q);
    printf("\nArea del cerchio: %.2f", c);
    printf("\nArea del triangolo equilatero: %.2f\n\n", t);

    return 0;
}

float quadrato(float d){
    float r;
    r = d * d;
    return r;
}

float cerchio(float d){
    float r;
    r = 3.14 * ((d / 2) * (d / 2));
    return r;
}

float triangolo(float d){
    float r;
    r = (d * d) / 2;
    return r;
}