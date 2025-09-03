#include <stdio.h>
int main()
{
    float montant;

    printf("Entrez un montant:");
    scanf("%f", &montant);

    float tax = montant * 5/100;

    float m = montant + tax;
    printf("Avec taxe ajoutee :%.2f", m);
    return 0;
}
