#include "baralho.h"

void criaBaralho(Carta baralho[NUM_CARTAS]){

    int indice;

    // 4 cores e  6 tipos de cartas
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 6; j++) {
            baralho->cor = i;
            baralho->tipo = j;
        }
    }
}

void embaralha(Carta baralho[NUM_CARTAS]){

}

void exibeBaralho(Carta baralho[NUM_CARTAS]){
    
}