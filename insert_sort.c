#include "baralho.h"

void insertSort(Hand *mao){
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

}

/*
void Insercao (Item* v, int n ){
    int i,j;
    Item aux;
    for (i = 1; i < n; i++){
        aux = v[i];
        j = i - 1;
        while ((j >= 0) && (aux.Chave < v[j].Chave)){
            v[j + 1] = v[j];
            j--;
        }
        v[j + 1] = aux;
    }
}
*/