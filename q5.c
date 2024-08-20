#include <stdio.h>
int main(){
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if (numero % 5 == 0) {
        printf("O numero %d e multiplo de cinco.\n", numero);
    } else {
        printf("O numero %d nao e multiplo de cinco.\n", numero);
    }
    return 0;
}