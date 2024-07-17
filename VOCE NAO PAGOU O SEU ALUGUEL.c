#include <stdio.h>
int main(void)
{
    float val_i,
          val_f;

    int juros = 0;
    int meses;

    printf("Ta devendo quanto cachorra??:");
    scanf("%f", &val_i);

    printf("Quantos meses de juros [1-5]?:");
    scanf("%f", &meses);

    switch(meses)
    {
        case 5:
        juros++;

        case 4:
        juros++;

        case 3:
        juros++;

        case 2:
        juros++;

        case 1:
        juros++;
        break;

        defaul:
            printf("ASDFJBVASJFVJASVFHAVSJKFJHD ENTAO QUER DIZER QUE TU JA TA NO OLHO DA RUA HAHUAHUAHUHAUHAUHUH");
    }
    printf("Juros: %d%\n", juros);
    val_f = ((1 + (juros / 100.0)) * val_i);
    printf("Tu ta devendo esse tanto aqui amigao: R$%.2f\n", val_f);
}
