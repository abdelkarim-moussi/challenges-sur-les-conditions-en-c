#include <stdio.h>


int main(){

/*Voyelle ou Non
Écrivez un programme en C qui vérifie si un caractère saisi par l'utilisateur
 est une voyelle ou non en utilisant l'instruction switch case.*/

char caractere;
 //demande a l'utilisateur de saisir un caractere

 printf("saisie un caractere : ");
 scanf("%c",&caractere);

 switch (caractere)
 {
 case 'a': printf("le caractere entrer est une voyelle");
    break;
 case 'i': printf("le caractere entrer est une voyelle");
    break;
 case 'o': printf("le caractere entrer est une voyelle");
    break;
 case 'e': printf("le caractere entrer est une voyelle");
    break;
 case 'u': printf("le caractere entrer est une voyelle");
    break;
 case 'y': printf("le caractere entrer est une voyelle");
    break;
 default: printf("le caractere entrer n'est pas une voyelle");
    break;
 }

}