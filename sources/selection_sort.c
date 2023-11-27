#include "headers/uno.h"

void selectionSort(Hand *mao){

    clock_t start_time, end_time;
    double elapsed_time;
    start_time = clock();

    int comparacoes = 0, movimentacoes = 0;

    int i, j, Min;
    Carta aux;

    for (i = 0; i < MAO-1; i++){
        Min = i;
        for (j = i+1; j < MAO; j++){
            comparacoes++;

            if (mao->cartas[j].i_carta < mao->cartas[Min].i_carta){
                Min = j;
            }
        }
        aux = mao->cartas[Min];
        mao->cartas[Min] = mao->cartas[i];
        mao->cartas[i] = aux;

        movimentacoes++;
    }

    end_time = clock();
    elapsed_time = (double)(end_time - start_time) / CLOCKS_PER_SEC;
    printf("\nSELECTION SORT\n");
    printf("Tempo gasto: %f segundos\n", elapsed_time);
    printf("Comparações: %i\n", comparacoes);
    printf("Movimentações: %i\n\n", movimentacoes);

}

/*
void Selecao (Item* v, int n){
int i, j, Min;
Item aux;
for (i = 0; i < n - 1; i++){
    Min = i;
    for (j = i + 1 ; j < n; j++)
    if ( v[j].Chave < v[Min].Chave)
    Min = j;
    aux = v[Min];
    v[Min] = v[i];
    v[i] = aux;
}
}
*/