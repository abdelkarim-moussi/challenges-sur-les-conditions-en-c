#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* Point sur un Segment
Écrivez un programme C qui lit les coordonnées des deux extrémités
d'un segment, et lit ensuite les coordonnées d'un point dans le plan
et dit si ce dernier se trouve ou non sur le segment.*/
int main(){
    int x1,x2,x3,y1,y2,y3,a,b;
    printf("saisi les coordonnees x et y du premiere extremite :\n");
    scanf("%d %d",&x1,&y1);
    printf("saisi les coordonnees x et y du deuxieme extremite :\n");
    scanf("%d %d",&x2,&y2);
    a = (y2 - y1)/(x2 - x1);
    b = y1 - a * x1;
    printf("entrer les coordonnee de votre point :\n");
    scanf("%d %d",&x3,&y3);
    if (y3 == a*x3 + b) printf("le point avec les coordonnees x = %d et y = %d apartien au segment AB",x3,y3);
    else printf("le point avec les coordonnees x = %d et y = %d n'apartien pas au segment AB",x3,y3);
    
    
}