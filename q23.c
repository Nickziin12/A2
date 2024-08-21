#include <stdio.h>
int main(){
int horario, trafego;
    int tempoVerde, tempoAmarelo, tempoVermelho;

    printf("Digite o horario do dia (1 = manha, 2 = tarde, 3 = noite):\n");
    scanf("%d", &horario);

    printf("Digite o nivel de trafego (1 = baixo, 2 = medio, 3 = alto):\n");
    scanf("%d", &trafego);

    switch (horario) {
        case 1: 
            tempoVerde = 30;
            tempoAmarelo = 5;
            tempoVermelho = 25;
            break;
        case 2:  
            tempoVerde = 40;
            tempoAmarelo = 5;
            tempoVermelho = 30;
            break;
        case 3:  
            tempoVerde = 20;
            tempoAmarelo = 5;
            tempoVermelho = 20;
            break;
        default:
            printf("Horario invalido.\n");
            return 1;
    }

    
    if (trafego == 1) {  
        tempoVerde -= 5;
        tempoVermelho += 5;
    } else if (trafego == 2) {  
        
    } else if (trafego == 3) {  
        tempoVerde += 10;
        tempoVermelho -= 10;
    } else {
        printf("Nivel de trafego invalido.\n");
        return 1;
    }

    printf("Tempo verde: %d segundos\n", tempoVerde);
    printf("Tempo amarelo: %d segundos\n", tempoAmarelo);
    printf("Tempo vermelho: %d segundos\n", tempoVermelho);
    return 0;
}