//Leggere un numero indeterminato di cifre e salvare il numero in una variabile intera.

#include <stdio.h>

char legginum(){
    char c;
    do{
        scanf("%c", &c);
    }while((c < 48)||(c > 57));

    return c;
}

int calcnum(char c){
    int num;
    num = c - 48;

    return num;
}

int main(){
    char caratt[5];
    int num[5], cifre, cifre2, cifre3, fine;
    printf("Numero di cifre da leggere (max 5): ");
    scanf("%d", &cifre);
    cifre3 = cifre;
    cifre2 = cifre;

    while(cifre > 0){
        printf("%d cifra: ", cifre);
        caratt[cifre] = legginum();
        --cifre;
    };
    while(cifre2 > 0){
        num[cifre2] = calcnum(caratt[cifre2]);
        --cifre2;
    };

    if(cifre3 == 1){
        printf("\n%d\n\n", num[1]);
    }else if(cifre3 == 2){
        fine = (num[2] * 10) + num[1];
        printf("\n%d\n\n", fine);
    }else if(cifre3 == 3){
        fine = (num[3] * 100) + (num[2] * 10) + num[1];
        printf("\n%d\n\n", fine);
    }else if(cifre3 == 4){
        fine = (num[4] * 1000) + (num[3] * 100) + (num[2] * 10) + num[1];
        printf("\n%d\n\n", fine);
    }else if(cifre3 == 5){
        fine = (num[5] * 10000) + (num[4] * 1000) + (num[3] * 100) + (num[2] * 10) + num[1];
        printf("\n%d\n\n", fine);
    };

    return 0;
}
