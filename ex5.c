#include <stdio.h>
int main()
{
    int x;

    printf("entrez la valeur de x :\n");
    scanf("%d", &x);

    int resultat = 3 * (x * x * x * x * x) + 2 * ( x * x * x * x) - 5 * (x * x * x) - (x * x)+ 7 * x - 6;
    printf("%d", resultat);
    return 0;
}