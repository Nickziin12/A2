#include <stdio.h>
int main(){
double num1, num2;
    char operacao;

    printf("Digite o primeiro número: ");
    scanf("%lf", &num1);

    printf("Digite o segundo número: ");
    scanf("%lf", &num2);

    printf("Digite a operacao (+, -, *, /): ");
    scanf(" %c", &operacao);

    switch (operacao) {
        case '+':
            printf("Resultado: %.2lf\n", num1 + num2);
            break;
        case '-':
            printf("Resultado: %.2lf\n", num1 - num2);
            break;
        case '*':
            printf("Resultado: %.2lf\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("Resultado: %.2lf\n", num1 / num2);
            } else {
                printf("Erro: Divisao por zero nao e permitida.\n");
            }
            break;
        default:
            printf("Operacao invalida. Por favor, use +, -, * ou /.\n");
            break;
    }
    return 0;
}