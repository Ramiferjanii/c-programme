#include<stdio.h>
void main()
{
 float note ;
 int D ;
 do
 {
     do{
        printf("donne le note de l'etudiant");
        scanf("%f",&note);

     }while( note<0 || note>20);
     printf("saisir un nombre de D \n");
     scanf("%d",&D);
 }while (note>=0 && note<=20);
}
