//Convertire da Celsius a Farenheit

#include <stdio.h>

void FtoC(float gradi){
    float c;
    c = (gradi - 32) * 5 / 9;
    printf("\nLa temperatura in gradi Celsius e': %.1f\n\n", c);
}

void CtoF(float gradi){
    float f;
    f = (gradi * 9 / 5) + 32;
    printf("\nLa temperatura in gradi Fahrenheit e': %.1f\n\n", f);
}

int main(){
    float gradi;
    char input;
    printf("Fahrenheit --> Celsius: 'c'\nCelsius --> Fahrenheit: 'f'\n\nScegli una conversione: ");
    scanf("%c", &input);
    printf("\nValore: ");
    scanf("%f", &gradi);
    if(input == 'c'){
        FtoC(gradi);
    }else CtoF(gradi);

    return 0;
}
