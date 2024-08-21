#include <stdio.h>
int main(){
int tipoProduto;
    int quantidade;
    float precoUnitario;
    float precoTotal;
    float precoDescontado;

    printf("Digite o tipo de produto (1-5):\n");
    printf("1: Produtos de tecnologia\n");
    printf("2: Produtos de alimentacao\n");
    printf("3: Produtos de vestuario\n");
    printf("4: Produtos de saude\n");
    printf("5: Produtos de lazer\n");
    scanf("%d", &tipoProduto);

    if (tipoProduto < 1 || tipoProduto > 5) {
        printf("Tipo de produto invalido.\n");
        return 1;
    }

    printf("Digite a quantidade adquirida:\n");
    scanf("%d", &quantidade);

    switch (tipoProduto) {
        case 1:
            precoUnitario = 150.00;
            break;
        case 2:
            precoUnitario = 50.00;
            break;
        case 3:
            precoUnitario = 80.00;
            break;
        case 4:
            precoUnitario = 120.00;
            break;
        case 5:
            precoUnitario = 90.00;
            break;
    }

    precoTotal = precoUnitario * quantidade;

    if (quantidade >= 1 && quantidade <= 5) {
        precoDescontado = precoTotal * 0.95;  
    } else if (quantidade >= 6 && quantidade <= 10) {
        precoDescontado = precoTotal * 0.90;  
    } else if (quantidade > 10) {
        precoDescontado = precoTotal * 0.85;  
    } else {
        precoDescontado = precoTotal;  
    }

    printf("Preco unitario: R$%.2f\n", precoUnitario);
    printf("Preco total antes do desconto: R$%.2f\n", precoTotal);
    printf("Preco total com desconto: R$%.2f\n", precoDescontado);
    return 0;
}