//Trovare la distanza tra due punti a partire dalle coordinate

#include <stdio.h>
#include <math.h>

double distanza(double lat1, double lat2, double lon1, double lon2){
    double ris;
    ris = sqrt(pow(lat2 - lat1, 2) + pow(lon2 - lon1, 2));
    return ris;
}

int main(){
    double lat1, lat2, lon1, lon2, ris;

    printf("Latitudine 1° Punto: ");
    scanf("%lf", &lat1);
    printf("\nLatitudine 2° Punto: ");
    scanf("%lf", &lat2);
    printf("\nLongitudine 1° Punto: ");
    scanf("%lf", &lon1);
    printf("\nLongitudine 2° Punto: ");
    scanf("%lf", &lon2);
    
    ris = distanza(lat1, lat2, lon1, lon2);

    printf("\n\nLa distanza tra i due punti è di %lf metri\n\n\n", ris);

    return 0;
    
}
