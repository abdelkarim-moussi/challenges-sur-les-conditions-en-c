#include <stdio.h>
#include <math.h>

int main(){
 /*Somme de Deux Valeurs
Écrivez un programme C pour calculer la somme de deux valeurs entières données.
Si les deux valeurs sont identiques, le programme doit renvoyer le triple de leur somme.*/
int valeur1,valeur2;
int somme = 0;
int triple = 0;
printf("entrer deux valeurs entiere : ");
scanf("%d %d",&valeur1,&valeur2);

if (valeur1 != valeur2)
{
    somme = valeur1 + valeur2;
    printf("la somme de %d et %d egale : %d",valeur1,valeur2,somme);
}
else{
    triple = pow((valeur1 + valeur2),3);
    printf("le triple de %d et %d egale %d ",valeur1,valeur2,triple);
}
}