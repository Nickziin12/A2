#include <stdio.h>
int main(){
int numero;

    
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if (numero >= 1 && numero <= 100) {
        printf("O numero %d esta entre 1 e 100.\n", numero);
    } else {
        printf("O numero %d nao esta entre 1 e 100.\n", numero);
    }
    return 0;
}