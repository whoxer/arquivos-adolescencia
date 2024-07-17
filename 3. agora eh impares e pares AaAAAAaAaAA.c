#include <stdio.h>
int main(void)
{
    int num,
        count;

    printf("Digite um numero:");
    scanf("%d", &num);

    printf("IMPARES\t     PARES\n");

    for(count=1;count<=num;count++)
    {
        if(count%2 == 1 )

            printf("  %d\t",count);
        else
            printf("   \t%d\n", count);
    }
}
