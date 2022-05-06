//Memorizza valori in un vettore, determina media, valore piu' grande e valore minimo

#include <stdio.h>

int vettore[];

void memorizza(int d);
float media(int d);
int grande(int d);
int piccolo(int d);

int main(){
    int d, g, p;
    float med;
    printf("[CALCOLATORE MEDIA, MASSIMA E MINIMA DI UN ARRAY]\n\n");
    printf("Dimensione del vettore: ");
    scanf("%d", &d);
    memorizza(d);
    med = media(d);
    g = grande(d);
    p = piccolo(d);
    printf("\n\nMedia: \t\t%.1f\nMaggiore: \t%d\nMinore: \t%d\n\n", med, g, p);
    
    return 0;
}

void memorizza(int d){
    while(d>0){
        printf("\nNumero (%d rimanenti): ", d);
        scanf("%d", &vettore[d]);
        --d;
    }
}

float media(int d){
    float med, d2, ris=0;
    d2 = d;
    while(d>0){
        ris = ris + vettore[d];
        --d;
    }
    med = ris / d2;
    
    return med;
}

int grande(int d){
    int ris=0, d2, c=0;
    d2 = d;
    while(d>0){
        if(ris<vettore[d]){
            ris = vettore[d];
        }
        --d;
    }
    /* while(c == 0){
        if(ris == vettore[d2]){
            c = 1;
        }else --d2;
    }
    printf("\nIl numero piu' grande si trova alla posizione %d", d2); */

    return ris;
}

int piccolo(int d){
    int ris=100000;
    while(d>0){
        if(ris>vettore[d]){
            ris = vettore[d];
        }
        --d;
    }

    return ris;
}