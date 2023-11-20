#include "baralho.h"

void insertSort(Hand *mao){

    clock_t start_time, end_time;
    double elapsed_time;
    start_time = clock();

    int i,j;
    Carta aux;

    for (int i = 1; i < MAO; i++){
        aux = mao->cartas[i];
        j = i - 1;

        while ((j >= 0) && (mao->cartas[j].i_carta > aux.i_carta)){
            mao->cartas[j+1] = mao->cartas[j];
            j--;
        }
        mao->cartas[j+1] = aux;
        
    }

    end_time = clock();
    elapsed_time = (double)(end_time - start_time) / CLOCKS_PER_SEC;
    printf("\nInsertion Sort");
    printf("\nTempo gasto: %f segundos\n", elapsed_time);
    //printf("Comparações = %i\n", comparacoes);
    //printf("Movimentações = %i\n\n", movimentacoes);

}