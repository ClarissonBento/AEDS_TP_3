#include "../headers/uno.h"

void modo_interativo(){
    Baralho baralho;
    Hand maozinha;
    int aux;

    criaBaralho(&baralho);
    embaralhaArray(&baralho, NUM_CARTAS);

    printf("Quantas mãos de cartas? ");
    scanf("%i", &aux);

    for (int i = 0; i < aux; i++){
        puxaDez(&baralho, &maozinha);
        imprimeResultados(maozinha, i);
    }
    
}