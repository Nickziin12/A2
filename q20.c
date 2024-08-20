#include <stdio.h>
int main(){
int horas;
    double custoTotal;

    printf("Digite o numero total de horas que o carro ficou estacionado: ");
    scanf("%d", &horas);

    custoTotal = 0.0;

    if (horas <= 2) {
        custoTotal = horas * 5.00;
    } else if (horas <= 5) {
        custoTotal = (2 * 5.00) + ((horas - 2) * 3.00);
    } else {
        custoTotal = (2 * 5.00) + (3 * 3.00) + ((horas - 5) * 2.00);
    }

    printf("O custo total a ser pago e: R$ %.2lf\n", custoTotal);

return 0;
}