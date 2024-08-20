#include <stdio.h>
int main(){
float velocidade;

    printf("Digite a velocidade do veiculo (em km/h): ");
    scanf("%f", &velocidade);

    if (velocidade < 30) {
        printf("A velocidade e baixa.\n");
    } else if (velocidade <= 60) {
        printf("A velocidade e média.\n");
    } else {
        printf("A velocidade e alta.\n");
    }

    return 0;
}