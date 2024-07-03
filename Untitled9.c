#include<stdio.h>
void main()
{
    float n1,n2,n3,M ;
    printf("donne les trois note de l'etudient");
    scanf("%f%f%f",&n1,&n2,&n3);
    M=(n1+n2+n3)/3 ;
    printf("moyenne et egale : %.2f",M);
    if (M<10){
        printf("insuffisant");
    }
     else if (M>=10 && M<=12)
     {
         printf(" mention :passable");
     }
     else if (M>12 && M<=14)
     {
         printf(" mention :assez bien");
     }
     else if (M>14 && M<=16)
     {
         printf(" mention :assez bien");

     }
     else if (M>16)
     {
         printf(" mention :tres bien");
     }
}
