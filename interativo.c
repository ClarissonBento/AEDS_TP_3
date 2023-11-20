#include "baralho.h"

void bubbleSort(Hand *mao);
void insertSort(Hand *mao);

void modo_interativo(){
    Baralho baralho;
    Hand maozinha, mao_aux;
    int aux;

    criaBaralho(&baralho);
    embaralhaArray(&baralho, NUM_CARTAS);

    printf("Quantas mãos de cartas? ");
    scanf("%i", &aux);

    for (int i = 0; i < aux; i++){
        puxaDez(&baralho, &maozinha);
        mao_aux = maozinha;

        printf("\n### %iº MÃO DE CARTAS ###\n", i+1); // Mão incial
        exibeMao(&mao_aux);

        printf("\n### %iª MÃO ORDENADA ###\n", i+1);
        bubbleSort(&mao_aux);
        exibeMao(&mao_aux);

        mao_aux = maozinha;

        insertSort(&mao_aux);
        exibeMao(&mao_aux);
    }
    
}