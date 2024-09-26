#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*Jour de la Semaine
Écrivez un programme C qui affiche d'une manière aléatoire un des jours de la semaine.*/


//random function
int print_random(int min,int max){
    int random;
    srand(time(0));
    for (int i = 0; i < max; i++)  random = rand() % (max - min + 1) + min;
    return random;
}

//main function
int main(){
int random1=print_random(0,7);
//tableau des jours
char *jours[] = {"lundi","mardi","mercredi","jeudi","vendredi","samedi","dimenche"};
// printf("le jour est : %s\n",jours[random]);
printf("le jour est : %s\n",jours[random1]);


}