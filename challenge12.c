#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*Comparaison d'Instants
Écrivez un programme C qui lit deux instants dans le format
HH:MM:SS et affiche un des messages suivants :
  
Le premier instant vient avant le deuxième ;
Le deuxième instant vient avant le premier ;
Il s'agit du même instant.*/

int main(){
int HH1, MM1,SS1, HH2,MM2,SS2;
    printf("entrer le premier instant : \n");
    printf("HH:");
    scanf("%d",&HH1);
    printf("MM:");
    scanf("%d",&MM1);
    printf("SS:");
    scanf("%d",&SS1);
    printf("entrer le deuxieme instant : \n");
    printf("HH:");
    scanf("%d",&HH2);
    printf("MM:");
    scanf("%d",&MM2);
    printf("SS:");
    scanf("%d",&SS2);
    if (HH1 < HH2 || HH1 == HH2 && MM1 < MM2 || HH1 == HH2 && MM1 == MM2 && SS1 < SS2){
        printf("Le premier instant vient avant le deuxieme");
    } 
    else if (HH1 == HH2 && MM1 == MM2 && SS1 == SS2) printf("Il s'agit du meme instant");
    else printf("Le premier instant vient apres le deuxième");
    
}