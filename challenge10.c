#include <stdio.h>
int main(){
    /*Formatage de la Date
Écrivez un programme C qui lit une date au 
format 15/09/2012 et l'affiche sous le format suivant :
15-Septembre-2012.*/
int jour,moi,annee;
//tableau de mois de l'annee
char *mois[] = {"janvier","fevrier","mars","avril","may","may","juin","juillet","aout","septembre","octobre","novembre","desembre"};
printf("entrer le jour:");
scanf("%d",&jour);
printf("entrer le moi:");
scanf("%d",&moi);
printf("entrer l'annee:");
scanf("%d",&annee);

for (int i = 1; i <= 12; i++)
{
    if (moi == i) printf("la date formater et %d-%s-%d",jour,mois[i],annee);
}

return 0;

}