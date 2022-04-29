//Calcolare il quadrato di un numero disparo intero inserito da tastiera.

#include <stdio.h>

int main(){
 int q=1, num=1, cont=1, n;
 
 do{
 printf("Inserire un numero disparo intero: ");
 scanf("%d", &n);
 }while(n%2==0);
 
 do{
 num = num + 2;
 q = q + num;
 cont = cont + 1;
 }while(cont<n);
 
 printf("\n\nIl quadrato di %d è %d \n\n\n", n, q);
 
 return 0;
}
