//Morra Cinese vs Computer

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int randomizza(){
    int r;
    srand(time(NULL));
    r = rand() % 3 + 1;
    return r;
}

int main(){
    int partite, scelta_u, scelta_ai;
    printf("Numero di partite: ");
    scanf("%d", &partite);
    while(partite > 0){
        printf("\n\nSasso (1)\nCarta (2)\nForbice (3)\n\nQuale scegli? ");
        scanf("%d", &scelta_u);
        scelta_ai = randomizza();

        if((scelta_u == 1)&&(scelta_ai == 1)){
            printf("\n\nPareggio");
        }else if((scelta_u == 1)&&(scelta_ai == 2)){
            printf("\n\nPerso");
        }else if((scelta_u == 1)&&(scelta_ai == 3)){
            printf("\n\nVinto");
        }else if((scelta_u == 2)&&(scelta_ai == 1)){
            printf("\n\nVinto");
        }else if((scelta_u == 2)&&(scelta_ai == 2)){
            printf("\n\nPareggio");
        }else if((scelta_u == 2)&&(scelta_ai == 3)){
            printf("\n\nPerso");
        }else if((scelta_u == 3)&&(scelta_ai == 1)){
            printf("\n\nPerso");
        }else if((scelta_u == 3)&&(scelta_ai == 2)){
            printf("\n\nVinto");
        }else if((scelta_u == 3)&&(scelta_ai == 3)){
            printf("\n\nPareggio");
        };
        --partite;
    }

    printf("\n\n");
    return 0;
}
