#include <stdio.h>

int main(){
    /*Conversion d'Année
Écrivez un programme C piloté par menu pour convertir
une année donnée en :
  
Mois
Jours
Heures
Minutes
Secondes
Pour plus de simplicité, n'incluez pas l'année bissextile (sauf si vous êtes courageux pour le faire). 1 an = 365 jours, 1 mois = 30 jours.
*/
int annee,mois,jours,heures,minutes,secondes;
int choi;
//demande a l'utilisateur d'entrer une annee
printf("entrer une annee : ");
scanf("%d",&annee);
printf("choisi votre chois :\n");
printf("1:convertie en mois\n2:convertie en jours\n3:convertie en heures\n4:convertie en minutes\n5:convertie en secondes\n");
scanf("%d",&choi);
switch (choi)
{
case 1: mois = annee * 12;
        printf("le nombre de mois vaut l'annee %d est %d",annee,mois);
    break;
case 2: jours = annee * 365;
        printf("le nombre de jours vaut l'annee %d est %d",annee,jours);
    break;
case 3: heures = annee * 365 * 24;
        printf("le nombre d'heures vaut l'annee %d est %d",annee,heures);
    break;
case 4: minutes = annee * 365 * 1440;
        printf("le nombre de minutes vaut l'annee %d est %d",annee,minutes);
    break;
case 5: secondes = annee * 365 * 1440 * 60;
        printf("le nombre de secondes vaut l'annee %d est %d",annee,secondes);
    break;

default:printf("%d",annee);
    break;
}
}