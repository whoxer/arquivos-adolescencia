#include <stdio.h>
int main(void)
{
    int continuar = 1;
    char opt;

    while(opt)
    {
        system("clear || cls");
        printf("Repetir? (S/s)im (N/n)ao\n");
        scanf("%c", &opt);

        switch(opt)
        {
            case 's':
            case 'S':
                break;

            case 'n':
            case 'N':
                continuar = 0;
        }
    }
}
