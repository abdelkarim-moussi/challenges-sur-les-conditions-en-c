#include <stdio.h>
#include <math.h>

int main(){

    /* Equation du Deuxième Degré
Écrivez un programme C qui permet de calculer les solutions
possibles d’une équation du deuxième degré.*/
float a ,b;
float c,x,y,z, Delta;
printf("entrer les facteur de l'equation (la forme de l'equation : ax² + bx + c)\n");
scanf("%f %f %f",&a,&b,&c);

Delta = pow(b,2) - (4 * a * c);
if (Delta == 0) printf("l'equation n'admet aucune solution reel");
else if(Delta <= 0) {
x = (-b)/(2*a);
printf("l'equation admet une seule solution : x = %f",x);
}
else if (Delta > 0)
{
    y = ((-b) - sqrt(Delta)) / (2 * a);
    z = ((-b) + sqrt(Delta)) / (2 * a);
    printf("l'equation admet deux solutions reels : y = %.2f et z = %.2f",y,z);
}


}