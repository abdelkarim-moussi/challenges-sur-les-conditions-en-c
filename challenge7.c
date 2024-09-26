#include <stdio.h>

int main(){
/*Alphabet Majuscule
Écrivez un programme pour vérifier si le caractère
donné est un alphabet majuscule ou non en utilisant
l'instruction conditionnelle if-else.
Les lettres majuscules vont de 'A' à 'Z'.
Les valeurs ASCII de 'A' et 'Z' sont respectivement
65 et 90. Si la valeur ASCII d'un caractère est
comprise entre 65 et 90, il s'agit d'un alphabet majuscule.*/


char caractere;
int ASCII;
printf("saisie un caractere\n");
scanf("%c",&caractere);
ASCII = caractere + 0;
if (65 <= ASCII && ASCII <= 90) printf ("le caractere %c et un alphabet MAJUSCULE",caractere);
else printf ("le caractere %c n'est un alphabet MAJUSCULE",caractere);

}