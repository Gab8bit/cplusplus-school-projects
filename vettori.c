#include <stdio.h>

int minimo(int array[], int dim);
int massimo(int array[], int dim);
double media(int array[], int dim);

int main(){
    int dim, repeat, text=0, min, max;
    double med;
    printf("Dimensione Array: ");
    scanf("%d", &dim);
    int array[dim];
    for(repeat=0; repeat<dim; ++repeat){
        ++text;
        printf("\nInserire valore intero %d: ", text);
        scanf("%d", &array[repeat]);
    }
    min = minimo(array, dim);
    max = massimo(array, dim);
    med = media(array, dim);
    printf("\n\nMinimo: %d\nMassimo: %d\nMedia: %lf\n\n", min, max, med);

    return 0;
}

int minimo(int array[], int dim){
    int min, ctrl2;
    ctrl2 = dim - 1;
    if(array[dim] < array[ctrl2]){
            min = array[dim];
    }else min = array[ctrl2];

    while(dim > 0){
        if(min > array[dim]){
            min = array[dim];
        }
        --dim;
    }

    return min;
}

int massimo(int array[], int dim){
    int max, ctrl2;
    ctrl2 = dim - 1;
    if(array[dim] > array[ctrl2]){
            max = array[dim];
    }else max = array[ctrl2];

    while(dim > 0){
        if(max < array[dim]){
            max = array[dim];
        }
        --dim;
    }

    return max;
}

double media(int array[], int dim){
    double media;
    int somma = 0, dim2;
    dim2 = dim;
    while(dim > 0){
        somma = somma + array[dim];
        --dim;
    }
    media = somma / dim2;
    
    return media;
}