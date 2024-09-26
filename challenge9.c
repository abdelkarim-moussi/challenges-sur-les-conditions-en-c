#include <stdio.h>

int main(){
/*Vérification d'Alphabet
Écrivez un programme C qui lit un caractère et détermine
s'il fait partie des alphabets ou non. Et s'il l'est,
dire en plus s’il est une minuscule ou une majuscule.*/
int ASCII;
char caractere;
//tableau des alphabets
char tab_caractere[] = {
'a','b','c','d','e','f','g',
'h','i','j','k','l','m','n','o','p','q',
'r','s','t','u','v','w','x','y','z'
};

printf("saisie un caractere: \n");
scanf("%c",&caractere);
ASCII = caractere + 0;
if (ASCII >= 65 && ASCII <= 90 || ASCII >= 97 && ASCII <= 122){
    printf("le caractere '%c' entrer est un alphabet\n",caractere);
}
for (int i = 0; i < 26; i++)
{
    if (ASCII >= 97 && ASCII <= 122) printf("le caractere '%c' entrer est un alphabet minuscule",caractere);
    else if (ASCII >= 65 && ASCII <= 90) printf("le caractere '%c' entrer est un alphabet MAJUSCULE",caractere);
    else printf("le caractere '%c' entrer n'est pas un alphabet",caractere);
    break;
}



}