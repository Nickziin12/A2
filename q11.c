#include <stdio.h>
int main(){
int a, b, c;

    printf("Digite o comprimento dos tres lados do triangulo:\n");
    printf("Lado a: ");
    scanf("%d", &a);
    printf("Lado b: ");
    scanf("%d", &b);
    printf("Lado c: ");
    scanf("%d", &c);

    if (a + b > c && a + c > b && b + c > a) {
        
        if (a == b && b == c) {
            printf("O triangulo e Equilatero.\n");
        } else if (a == b || a == c || b == c) {
            printf("O triangulo e Isosceles.\n");
        } else {
            printf("O triangulo e Escaleno.\n");
        }
    } else {
        printf("Os valores nao formam um triangulo.\n");
    }

    return 0;
}