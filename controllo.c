//Fare un programma che controlli quanti valori superano una determinata cifra

#include <stdio.h>

int main(){
 int k, n, mag, count, num;
 
 mag = 0;
 count = 0;
 printf("Inserisci il valore da superare: ");
 scanf("%d", &k);
 printf("\nInserisci il numero totale di valori da controllare: ");
 scanf("%d", &n);
 while(count<n){
 printf("\nInserisci un numero: ");
 scanf("%d", &num);
 count = count + 1;
 if(num>k){
 mag = mag + 1;
 };
 };
 
 printf("\n\nI numeri maggiori di %d sono %d \n\n\n", k, mag);
 
 return 0;

}
