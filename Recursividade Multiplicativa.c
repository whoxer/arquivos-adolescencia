#include <stdio.h>
int mult(int n)
{
    if(n == 1)
        return 1;
    else
        return(n * mult(n-1));
}
int main(void)
{
    int n;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    printf("Numero multiplicado: %d\n", mult(n));
}
