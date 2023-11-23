#include "baralho.h"
/*
void Ordena(int Esq, int Dir, Hand *mao)
{
int i,j;
 Particao(Esq, Dir, &i, &j, mao);
 if (Esq < j) Ordena(Esq, j, mao);
 if (i < Dir) Ordena(i, Dir, mao);
}
void QuickSort(Hand *mao, int n)
{
 Ordena(0, n-1, mao);
}
void Particao(int Esq, int Dir, int *i, int *j, Hand *mao){
    Hand pivo, aux;
    *i = Esq; *j = Dir;
    pivo = mao[(*i + *j)/2]; // obtem o pivo x
    do
    {
        while (pivo.Chave > mao[*i].Chave) (*i)++;
        while (pivo.Chave < mao[*j].Chave) (*j)--;
            if (*i <= *j) {
                    aux = mao[*i]; mao[*i] = mao[*j]; mao[*j] = aux;
                    (*i)++; (*j)--;
                }
 } while (*i <= *j);
}
*/