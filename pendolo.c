/*Un pendolo oscilla con un periodo P espresso in secondi che e' funzione della lunghezza l
in metri del filo di sospensione secondo la seguente formula: P=6,2832 x radice di (l/g),
dove la costante g e' l'acceletarzione di gravita', che sulla Terra vale 9,8 m/s ^ 2.
Scrivere una funzione C++ che determini la lunghezza di un pendolo, dato come parametro il periodo con cui
deve oscillare.
*/

#include <stdio.h>
#include <math.h>

double lungh(double p){
    double l, pgdopp;
    const double g = 9.81;
    const double pigreco = 3.14;

    pgdopp = pigreco * 2;
    l = (pow(p,2)*g)/(pow(pgdopp, 2));    //(oscillazione alla seconda * g)/(doppio di pigreco alla seconda)
    return l;
}

int main(){
    double p, l;
    printf("Tempo per una oscillazione del pendolo (in secondi): ");
    scanf("%lf", &p);
    l = lungh(p);
    printf("\nIl pendolo e' lungo %lf metri\n\n\n", l);
    
    return 0;
}
