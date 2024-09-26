#include <stdio.h>

int main(){
/*Positif, Négatif ou Nul
Écrivez un programme pour vérifier si le nombre
donné est positif, négatif ou nul. Si le nombre est
inférieur à zéro, alors le nombre est négatif et si
le nombre est supérieur à zéro, alors le nombre est 
positif. Si les deux conditions sont fausses,
le nombre est égal à zéro.*/
int nombre;
printf("donner un nombre : \n");
scanf("%d",&nombre);
if (nombre < 0) printf("le nombre %d est negatif",nombre);
else if (nombre > 0 ) printf("le nombre %d est positif",nombre);
else printf("le nombre %d est null",nombre);

}