#include <stdio.h>
int main(void)
{
    char operacao;
    float num1,
          num2;

    printf("Escolha com que operador ira calcular [+ - * /]\n");
    scanf("%c", &operacao);

    printf("Digite o primeiro numero:");
    scanf("%f", &num1);

    printf("Digite o segundo numero:");
    scanf("%f", &num2);

    switch(operacao)
    {
    case '+':
        printf("%.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
        break;

    case '-':
        printf("%.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
        break;

    case '*':
        printf("%.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
        break;

    case '/':
        printf("%.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
        break;

    default:
        printf("Voce tentou calcular um numero meio errado meu chapa");
    }
}
