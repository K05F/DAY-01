#include <stdio.h>
int main()
{
    int montant;

    printf("entrez la valeur de  montant en dollars americains :\n");
    scanf("%d", &montant);

    printf("Billets de 20$ : %d\n", montant / 20);
    montant = montant % 20;
    
    printf("Billets de 10$ : %d\n", montant / 10);
    montant = montant % 10;

    printf("Billets de 5$ : %d\n", montant / 5);
    montant = montant % 5;

    printf("Billets de 1$ : %d", montant / 1);
    
    return 0;
}
