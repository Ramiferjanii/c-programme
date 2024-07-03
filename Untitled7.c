#include<stdio.h>
void main ()
{
    int a,b ;
    ;
    printf(" donner A , B: \n");
    scanf("%d%d",&a,&b);
    if(a>0)
    {

        if (b>=0)
        {
            printf("signe positif : \n");

        }
        else {
            printf("signe negatif : \n");
        }
    }
    else
    {
        if (a<0)
        {
            if (b>0)
            {
                printf ("signe negatif : \n");
            }
            else
            {
                printf ("signe positif : \n");
            }
        }
        else {
            printf ("signe positif :\n");
        }
    }
}
