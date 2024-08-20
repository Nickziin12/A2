#include <stdio.h>
int main(){
int nota;

    printf("Digite a nota do estudante (0 a 100): ");
    scanf("%d", &nota);

    if (nota < 0 || nota > 100) {
        printf("Nota invalida. A nota deve estar entre 0 e 100.\n");
    } else if (nota >= 80) {
        printf("Classificacao: Excelente\n");
    } else if (nota >= 60) {
        printf("Classificacao: Bom\n");
    } else if (nota >= 40) {
        printf("Classificacao: Suficiente\n");
    } else {
        printf("Classificacao: Insuficiente\n");
    }
    return 0;
}