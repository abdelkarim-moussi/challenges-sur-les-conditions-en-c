#include <stdio.h>


int main(){
    /*Paire ou Impaire
Écrivez un programme qui demande un nombre et
 affiche si ce nombre est pair ou impair.*/
int number;

//demande a l'utilisateur d'entrer un nombre
 printf("Entrer un nombre entier : ");
 scanf("%d",&number);

if ((number % 2) == 0) printf("le nombre %d est pair",number);

else printf("le nombre %d est impair",number);

}