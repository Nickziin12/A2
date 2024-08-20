#include <stdio.h>
int main(){
int numero;
 
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if (numero % 2 == 0 && numero % 3 == 0 && numero % 5 == 0) {
        printf("O numero e divisivel por 2, 3 e 5.\n");
    } else {
        printf("O nemero nao e divisivel por 2, 3 e 5 simultaneamente.\n");
    }

    return 0;
}