#include <stdio.h>
int main()
{
    float montant;
    printf("entrez un montant : ");
    scanf("%f", &montant);

    float tax = montant * 5 / 100;
    printf("tax = %.2f", tax);
    float TA = montant + tax;
    printf("Avec taxe ajoutee : %.2f", TA);
    return 0;
}