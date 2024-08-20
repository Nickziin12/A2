#include <stdio.h>
int main(){
double peso, altura, imc;

    printf("Digite o peso (em kg): ");
    scanf("%lf", &peso);

    printf("Digite a altura (em metros): ");
    scanf("%lf", &altura);

    imc = peso / (altura * altura);

    if (imc < 18.5) {
        printf("Classificacao: Abaixo do peso\n");
    } else if (imc >= 18.5 && imc < 24.9) {
        printf("Classificacao: Normal\n");
    } else if (imc >= 25.0 && imc < 29.9) {
        printf("Classificacao: Sobrepeso\n");
    } else {
        printf("Classificacao: Obeso\n");
    }

    printf("IMC: %.2lf\n", imc);

    return 0;
}