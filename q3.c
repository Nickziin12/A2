#include <stdio.h>
int main(){
float temperatura;

    
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &temperatura);

    if (temperatura > 30.0) {
        printf("A temperatura de %.1fC e quente.\n", temperatura);
    } else {
        printf("A temperatura de %.1fC e fria.\n", temperatura);
    }

    return 0;
}