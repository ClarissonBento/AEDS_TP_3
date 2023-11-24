#ifndef BARALHO_H
#define BARALHO_H

#include "carta.h"

typedef struct {
    Carta cartas[NUM_CARTAS];
    int num_cartas;
} Baralho;

// Cabeçalho de funções
void criaBaralho(Baralho *baralho);
void embaralhaArray(Baralho *baralho, int tamanho);
void exibeBaralho(Baralho *baralho);

#endif