#include "baralho.h"

void trocar_2(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(Hand *mao){
    Carta aux;

    for (int i = 0; i < MAO; i++){
        for (int j = 0; j < MAO-1; j++){
            if (mao->cartas[j].i_carta > mao->cartas[j+1].i_carta)
            {
                trocar(&mao->cartas[j], &mao->cartas[j+1]);
            }
            
        }
        
    }
    
}