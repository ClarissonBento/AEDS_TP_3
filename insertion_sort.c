#include "headers/uno.h"

void insertSort(Hand *mao){

    clock_t start_time, end_time;
    double elapsed_time;
    start_time = clock();

    int i,j, comparacoes = 0, movimentacoes = 0;
    Carta aux;

    for (i = 1; i < MAO; i++){
        aux = mao->cartas[i];
        j = i - 1;

        while ((j >= 0) && (mao->cartas[j].i_carta > aux.i_carta)){
            mao->cartas[j+1] = mao->cartas[j];
            j--;
            comparacoes++;
            movimentacoes++;
        }
        mao->cartas[j+1] = aux;
        
    }

    end_time = clock();
    elapsed_time = (double)(end_time - start_time) / CLOCKS_PER_SEC;
    printf("\nINSERTION SORT");
    printf("\nTempo gasto: %f segundos", elapsed_time);
    printf("\nComparações: %i", comparacoes);
    printf("\nMovimentações: %i\n\n", movimentacoes);

}