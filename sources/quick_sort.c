#include "../headers/uno.h"

void particao(int Esq, int Dir, int *i, int *j, Hand *mao, int *comparacoes, int *movimentacoes){
    Carta pivo, aux;
    *i = Esq;
    *j = Dir;

    pivo = mao->cartas[(*i + *j) / 2]; // obtem o pivo x
    do {
        while (pivo.i_carta > mao->cartas[*i].i_carta){
            (*i)++;
            (*comparacoes)++;
        }
        while (pivo.i_carta < mao->cartas[*j].i_carta){
            (*j)--;
            (*comparacoes)++;
        }

        if (*i <= *j) {
            aux = mao->cartas[*i];
            mao->cartas[*i] = mao->cartas[*j];
            mao->cartas[*j] = aux;
            (*i)++;
            (*j)--;
            (*movimentacoes)++;
        }

    } while (*i <= *j);
}

void ordena(int Esq, int Dir, Hand *mao, int *comparacoes, int *movimentacoes){
    int i, j;

    particao(Esq, Dir, &i, &j, mao, comparacoes, movimentacoes);
    if (Esq < j) ordena(Esq, j, mao, comparacoes, movimentacoes);
    if (i < Dir) ordena(i, Dir, mao, comparacoes, movimentacoes);
}

void quickSort(Hand *mao){
    clock_t start_time, end_time;
    double elapsed_time;
    start_time = clock();

    int comparacoes = 0, movimentacoes = 0;

    ordena(0, MAO - 1, mao, &comparacoes, &movimentacoes);

    end_time = clock();
    elapsed_time = (double)(end_time - start_time) / CLOCKS_PER_SEC;
    printf("\nQUICK SORT\n");
    printf("Tempo gasto: %f segundos\n", elapsed_time);
    printf("Comparações: %i\n", comparacoes);
    printf("Movimentações: %i\n\n", movimentacoes);
}