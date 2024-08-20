#include <stdio.h>
int main(){
int idade;

    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    if (idade >= 18) {
        printf("Voce esta apto a votar.\n");
    } else {
        printf("Voce nao esta apto a votar.\n");
    }
    return 0;
}