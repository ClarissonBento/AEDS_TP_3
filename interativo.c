#include "baralho.h"
#include "ordenadores.h"

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

        printf("\n################################");
        printf("\n####### %iª MÃO DE CARTAS #######\n", i+1);
        printf("################################\n");
        printf("\nMão incial:\n");
        exibeMao(&mao_aux); // Mão inicial

        //printf("\n##### %iª MÃO ORDENADA #####\n", i+1);
        bubbleSort(&mao_aux);
        exibeMao(&mao_aux);

        mao_aux = maozinha; // atribui a mão embaralhada novamente para reordenar

        insertSort(&mao_aux);
        exibeMao(&mao_aux);
    }
    
}