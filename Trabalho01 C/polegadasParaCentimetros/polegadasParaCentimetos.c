#include<stdio.h>
#include<stdlib.h>


int main() {
    float inicio, fim, polegada, cm;
    int i;

    printf("Digite o valor inicial em polegadas: ");
    scanf("%f", &inicio);

    printf("Digite o valor final em polegadas: ");
    scanf("%f", &fim);

    printf("\nTabela de conversao de polegadas para centimetros:\n");
    printf("--------------------------------------------------\n");
    printf("| Polegadas   | Centimetros |\n");
    printf("--------------------------------------------------\n");

    for (i = inicio; i <= fim; i++) {
        polegada = i;
        cm = polegada * 2.54;
        printf("| %6.2f     | %8.2f    |\n", polegada, cm);
    }

    printf("--------------------------------------------------\n");

    return 0;
}
