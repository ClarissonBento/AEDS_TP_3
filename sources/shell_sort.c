#include "headers/uno.h"

void shellSort(Hand *mao){

    clock_t start_time, end_time;
    double elapsed_time;
    start_time = clock();

    int i,j, comparacoes = 0, movimentacoes = 0;
    int h = 1;
    Carta aux;

    do h = (h * 3 + 1); while (h < MAO);
    do{
        h = h/3;
        for (i = h; i < MAO; i++){
            aux = mao->cartas[i];
            j = i;
            comparacoes++;

            while (mao->cartas[j - h].i_carta > aux.i_carta){
                mao->cartas[j] = mao->cartas[j - h];
                j -= h;
                if (j < h) break;
                comparacoes++;
                movimentacoes++;
            }
            
            mao->cartas[j] = aux;
        }
    } while (h != 1);

    end_time = clock();
    elapsed_time = (double)(end_time - start_time) / CLOCKS_PER_SEC;
    printf("\nSHELL SORT");
    printf("\nTempo gasto: %f segundos", elapsed_time);
    printf("\nComparações: %i", comparacoes);
    printf("\nMovimentações: %i\n\n", movimentacoes);

}

/*
void Shellsort (Item* A, int n){
int i, j;
int h = 1;
Item aux;

do h = h * 3 + 1; while (h < n);
do
{
    h = h/3;
    for( i = h ; i < n ; i++ ){
        aux = A[i]; j = i;
        hile (A[j – h].Chave > aux.Chave){
            A[j] = A[j – h]; j -= h;
            if (j < h) break;
        }
        A[j] = aux;
    }
} while (h != 1);
}
*/