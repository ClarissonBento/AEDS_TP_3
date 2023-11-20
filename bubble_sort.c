#include "baralho.h"

// Esse é o bolha melhorado
void bubbleSort(Hand *mao){

    clock_t start_time, end_time;
    double elapsed_time;
    start_time = clock();

    int comparacoes = 0, movimentacoes = 0;

    for (int i = 0; i < MAO-1; i++){
        for (int j = 0; j < MAO-i-1; j++){
            comparacoes++;
            if (mao->cartas[j].i_carta >= mao->cartas[j+1].i_carta)
            {
                trocar(&mao->cartas[j], &mao->cartas[j+1]);
                movimentacoes++;
            }
        }
    }

    end_time = clock();
    elapsed_time = (double)(end_time - start_time) / CLOCKS_PER_SEC;
    printf("\n###### BOLHA MELHORADO ######\n");
    printf("Tempo gasto: %f segundos\n", elapsed_time);
    printf("Comparações: %i\n", comparacoes);
    printf("Movimentações: %i\n\n", movimentacoes);
    
}