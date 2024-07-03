#include<stdio.h>
void main()

{
int A ;
char S ;
printf(" donne le sexe de l'habitant \n");
scanf("%c",&S);
printf(" donne l'age  d'un habitant \n");
scanf("%d",&A);

if ((A>=20 && S=='H')||(A>=18 && A<=35 && S=='F'))

 printf("l'habitant et impossable");

else
    printf("lhabitant et n'est pas impossable ");
}
