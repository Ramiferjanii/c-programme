#include<stdio.h>
void main ()

{

    int N , I ;
    do
    {
        printf("saisir N : \n");
        scanf("%d",&N);

    }while (N<0);
    for ( I=0 ; I<=N ; I++)
    {
         if ( I%2 ==0)
         {

             printf("%d\t",I);
         }
    }
}

