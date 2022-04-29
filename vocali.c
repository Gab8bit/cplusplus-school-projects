//Salvare in un array le lettere inserite dall'utente e contare quante vocali ci sono

#include <stdio.h>

int main(){
    int numlett, numlett2, count;
    printf("Quante lettere vuoi inserire? ");
    scanf("%d", &numlett);
    numlett2 = numlett;
    char lett[numlett];

    while(numlett > 0){
        printf("\nInserisci lettera minuscola (%d rimanenti): ", numlett);
        scanf(" %c", &lett[numlett]);
        --numlett;
    };


    while(numlett2 > 0){
        if((lett[numlett2] == 97)||(lett[numlett2] == 101)||(lett[numlett2] == 105)||(lett[numlett2] == 111)||(lett[numlett2] == 117)){
            ++count;
        };
        --numlett2;
    };
    

    printf("\nCi sono %d vocali\n\n", count);


    return 0;
}
