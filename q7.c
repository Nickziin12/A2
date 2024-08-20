#include <stdio.h>
int main(){
int nivel;

    printf("Digite o nível de água no tanque (0 a 100): ");
    scanf("%d", &nivel);

    if (nivel < 0 || nivel > 100) {
        printf("Nivel de agua invalido. O valor deve estar entre 0 e 100.\n");
    } else if (nivel <= 30) {
        printf("O nivel de agua e baixo.\n");
    } else if (nivel <= 70) {
        printf("O nivel de agua e medio.\n");
    } else {
        printf("O nivel de agua e alto.\n");
    }
    return 0;
}