#include <stdio.h>
int main(){
char clima[20];
    int temperatura;

    printf("Digite o tipo de clima (ensolarado, nublado, chuvoso):\n");
    scanf("%19s", clima);

    printf("Digite a temperatura atual em graus Celsius:\n");
    scanf("%d", &temperatura);

    if (strcmp(clima, "ensolarado") == 0) {
        if (temperatura > 25) {
            printf("Sugestao: Va a praia ou faca um piquenique.\n");
        } else if (temperatura >= 15 && temperatura <= 25) {
            printf("Sugestao: Faca caminhadas ou passeios de bicicleta.\n");
        } else if (temperatura < 15) {
            printf("Sugestao: Fotografia da natureza ou observacao de passaros.\n");
        } else {
            printf("Temperatura invalida.\n");
        }
    } else if (strcmp(clima, "nublado") == 0) {
        if (temperatura > 20) {
            printf("Sugestao: Visite museus ou faca compras em centros comerciais ao ar livre.\n");
        } else if (temperatura >= 10 && temperatura <= 20) {
            printf("Sugestao: Passeios culturais, como galerias de arte ou teatros.\n");
        } else if (temperatura < 10) {
            printf("Sugestao: Leitura em bibliotecas ou sessoes de cinema.\n");
        } else {
            printf("Temperatura invalida.\n");
        }
    } else if (strcmp(clima, "chuvoso") == 0) {
        if (temperatura > 15) {
            printf("Sugestao: Visite um spa ou faca aulas de culinaria.\n");
        } else if (temperatura >= 5 && temperatura <= 15) {
            printf("Sugestao: Museus de ciencia ou sessooes de boliche.\n");
        } else if (temperatura < 5) {
            printf("Sugestao: Tarde de jogos de tabuleiro em casa ou maratona de filmes.\n");
        } else {
            printf("Temperatura invalida.\n");
        }
    } else {
        printf("Tipo de clima invalido.\n");
    }
    return 0;
}