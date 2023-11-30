#include "../headers/uno.h"

void constroiHeap(Hand *mao, int N, int *comparacoes, int *movimentacoes);
void refaz(int i, int N, Hand *mao, int *comparacoes, int *movimentacoes);

void heapSort(Hand *mao, int N){
    
    clock_t start_time, end_time;
    double elapsed_time;
    start_time = clock();

    int comparacoes = 0, movimentacoes = 0;

    Carta aux;
    constroiHeap(mao, N, &comparacoes, &movimentacoes);

    while (N > 1){
        N--;
        aux = mao->cartas[0];
        mao->cartas[0] = mao->cartas[N];
        mao->cartas[N] = aux;
        refaz(0, N, mao, &comparacoes, &movimentacoes);
    }

    end_time = clock();
    elapsed_time = (double)(end_time - start_time) / CLOCKS_PER_SEC;
    printf("\nHEAP SORT\n");
    printf("Tempo gasto: %f segundos\n", elapsed_time);
    printf("Comparações: %i\n", comparacoes);
    printf("Movimentações: %i\n\n", movimentacoes);
    
}

void constroiHeap(Hand *mao, int N, int *comparacoes, int *movimentacoes){
    int i = N/2;

    while (i > 0){
        i--;
        refaz(i, N, mao, comparacoes, movimentacoes);
    }
    
}

void refaz(int i, int N, Hand *mao, int *comparacoes, int *movimentacoes){
    int j = i*2+1;
    Carta aux = mao->cartas[i];

    while (j < N){
        (*comparacoes)++;
        if (j + 1 < N && mao->cartas[j].i_carta < mao->cartas[j+1].i_carta){
            j++;
        }
        (*comparacoes)++;
        if (aux.i_carta >= mao->cartas[j].i_carta){
            break;
        }

        mao->cartas[i] = mao->cartas[j];
        i = j;
        j = i * 2 + 1;
        (*movimentacoes)++;
    }

    mao->cartas[i] = aux;
    (*movimentacoes)++;
}