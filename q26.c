#include <stdio.h>
int main(){
int tipoEvento;
    int assentosDesejados;
    int capacidadeEvento;
    int assentosDisponiveis;

    const int capacidadeConcerto = 500;
    const int capacidadeTeatro = 200;
    const int capacidadeEventoEsportivo = 1000;
    const int capacidadeConferencia = 300;

    assentosDisponiveis = 0;

    printf("Selecione o tipo de evento:\n");
    printf("1. Concerto\n");
    printf("2. Teatro\n");
    printf("3. Evento Esportivo\n");
    printf("4. Conferencia\n");
    scanf("%d", &tipoEvento);

    switch (tipoEvento) {
        case 1:
            capacidadeEvento = capacidadeConcerto;
            break;
        case 2:
            capacidadeEvento = capacidadeTeatro;
            break;
        case 3:
            capacidadeEvento = capacidadeEventoEsportivo;
            break;
        case 4:
            capacidadeEvento = capacidadeConferencia;
            break;
        default:
            printf("Tipo de evento invalido.\n");
            return 1;
    }

    printf("Digite o numero de assentos desejados:\n");
    scanf("%d", &assentosDesejados);

    if (assentosDesejados <= capacidadeEvento) {
        printf("Reserva confirmada: %d assentos reservados para o evento.\n", assentosDesejados);
        
        assentosDisponiveis = capacidadeEvento - assentosDesejados;
    } else {
        printf("Nao ha assentos suficientes disponiveis. Solicitacao nao pode ser atendida.\n");
    }
    return 0;
}