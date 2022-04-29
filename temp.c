//Contare per quanti giorni su 31 (1 mese) la temperatura e' rimasta sotto lo zero.

#include <stdio.h>
int main(){
 int temp, cont=0, giorno=1, meno=0;
 
 do{
 printf("Inserisci la temperatura del giorno %d: ", giorno);
 scanf("%d", &temp);
 if(temp<0) meno = meno+1;
 giorno = giorno + 1;
 cont = cont + 1;
 } while(cont<31);
 
 printf("\n\nLa temperatura è rimasta sotto lo zero per %d giorni\n\n\n", meno);
 
 return 0;
}
