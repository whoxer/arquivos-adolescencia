#include <stdio.h>
int main(void)
{
    int count,
        soma;

    for(count=1, soma=0;count<=100;count++)
    {
        if(count%5 == 0)
            continue;
       soma = soma + count;
    }

    printf("Soma %d", soma);
}
