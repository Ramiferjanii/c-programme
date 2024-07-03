#include<stdio.h>
void main()
{
    float A,B ;
    char O ;
    printf("donne le valeur de A :");
    scanf("%f",&A);
    printf("donne le opperateur :");
    scanf(" %c",&O);
    printf("donne le valeur B :");
    scanf ("%f",&B);
    switch (O)
    {
        case '+': printf("A + B = %.2f",A + B);
                      break ;
        case '-' : printf("A - B = %.2f", A - B ) ;
        break ;
        case '*' : printf("A * B = %.2f", A * B);
        break ;
        case '/' :
            if (B!=0)
                printf (" A / b = %.2f", A / B );
            else
                printf(" le division par 0 est imppossible");
        break ;
        default : printf("le ooperateur est impossible de calcule");
        break ;
    }
}
