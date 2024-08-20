#include <stdio.h>
int main(){
int numero;
    int proximidade10, proximidade100, proximidade1000;
    int maisProximo;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    proximidade10 = fabs(numero - 10);
    proximidade100 = fabs(numero - 100);
    proximidade1000 = fabs(numero - 1000);

    if (proximidade10 < proximidade100 && proximidade10 < proximidade1000) {
        maisProximo = 10;
    } else if (proximidade100 < proximidade10 && proximidade100 < proximidade1000) {
        maisProximo = 100;
    } else if (proximidade1000 < proximidade10 && proximidade1000 < proximidade100) {
        maisProximo = 1000;
    } else {
    
        if (proximidade10 == proximidade100 && proximidade10 < proximidade1000) {
            maisProximo = 100;
        } else if (proximidade10 == proximidade1000 && proximidade10 < proximidade100) {
            maisProximo = 1000;
        } else if (proximidade100 == proximidade1000 && proximidade100 < proximidade10) {
            maisProximo = 1000;
        } else if (proximidade10 == proximidade100 && proximidade10 == proximidade1000) {
            maisProximo = 1000;
        }
    }

    printf("O numero %d esta mais proximo de %d.\n", numero, maisProximo);
    return 0;
}