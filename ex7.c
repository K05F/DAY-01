#include <stdio.h>
int main()
{
    int montant;

    printf("entrez la valeur de  montant en dollars americains :\n");
    scanf("%d", &montant);

    printf("Billets de 20$ : %d\n", montant / 20);
    if (montant % 20 != 0)
    {
        printf("Billets de 10$ : %d", montant / 10);
    }
    return 0;
}