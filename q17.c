#include <stdio.h>
int main(){
double valorCompra, valorFinal;
    double desconto;

    printf("Digite o valor da compra (em R$): ");
    scanf("%lf", &valorCompra);
 
    if (valorCompra <= 100) {
        desconto = 0.05; 
    } else if (valorCompra <= 500) {
        desconto = 0.10; 
    } else {
        desconto = 0.15; 
    }

    valorFinal = valorCompra * (1 - desconto);

    printf("Valor final apos aplicar o desconto: R$ %.2lf\n", valorFinal);
    return 0;
}