#include <stdio.h>

int main(){
/*Mention Obtenue
Nous désirons afficher la mention obtenue par un élève 
en fonction de la moyenne de ses notes. 
S’il a une moyenne strictement inférieure à 10, 
il est recalé. S’il a une moyenne entre 10 (inclus) et 12, 
il obtient la mention passable. 
S’il a une moyenne entre 12 (inclus) et 14, 
il obtient la mention assez bien. 
S’il a une moyenne entre 14 (inclus) et 16, 
il obtient la mention bien. S’il a une moyenne supérieure à 16
(inclus) il obtient la mention très bien. 
Écrire les instructions nécessaires.*/
float note1,note2,note3,note4,moyenne,somme;

printf("entrer quatre notes : \n");
scanf("%f %f %f %f",&note1,&note2,&note3,&note4);
float notes[] = {note1,note2,note3,note4};
for (int i = 0; i < 4; i++) somme += notes[i];
moyenne = somme / 4;
printf("la moyenne des notes %.2f %.2f %.2f %.2f est %.2f",note1,note2,note3,note4,moyenne);

}