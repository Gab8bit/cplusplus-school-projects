/*
Il tachimetro per biciclette determina la velocita' espressa in metri/minuto a partire dal numero g di giri
della ruota conteggiati in un periodo di 10s in base alla seguente formula:
v = 3.1416 * d * g * 6
dove d e' il diametro della ruota espresso in metri.
Scrivere una funzione C++ che, a partire dal diametro della ruota e dal numero di giri conteggiati in 10s,
determini la velocita' in km/h della bicicletta.
*/

#include <stdio.h>

float velocita(float d, float g){
    float r, kmh;
    const float pigreco = 3.1416;
    const double mmtokmh = 16.666666666667;

    r = pigreco * d * g * 6;
    kmh = r / mmtokmh;

    return kmh;
}


int main(){
    float diametro, giri, vel, kmh;
    printf("Diametro della ruota: ");
    scanf("%f", &diametro);
    printf("\nNumero di giri in 10 secondi: ");
    scanf("%f", &giri);

    vel = velocita(diametro, giri);

    printf("\n\n--> %f km/h\n\n\n", vel);

return 0;
}



/*
            (float conversione (float g, float d)) 
                            |
                            V
        | R <-- ((3.1416 * d * g * 6) / 1000) * 60 |
                            |
                            v
                        (return r)
*/


/*
                         (INIZIO) 
                            |
                            V
                        | d <-- 0.0 |
                        | g <-- 0.0 |
                        | v <-- 0.0 |
                            |
                            v
        /scrivi("Inserire il diametro della ruota: ")/
        /               leggi(d)                     /
        /   scrivi("Inserire il numero di giri: ")   /
        /               leggi(g)                     /
                            |
                            v
                || v <-- velocita(d, g) ||
                            |
                            v
        /   scrivi("La velocita' e' ", v, " km/h")   /   
                            |
                            v
                         (FINE)     
*/