#ifndef BARALHO_H
#define BARALHO_H

#define NUM_CARTAS 56

#include <stdio.h>
#include <stdlib.h>

typedef enum {VERDE, AMARELO, VERMELHO, AZUL} Cores;
typedef enum {NUMERICA, PULAR, VOLTAR, MAIS_DOIS, MAIS_QUATRO, CORINGA} TipoCarta;

typedef struct {
    Cores cor;
    TipoCarta tipo;
} Carta;

void criaBaralho(Carta baralho[NUM_CARTAS]);
void embaralha(Carta baralho[NUM_CARTAS]);
void exibeBaralho(Carta baralho[NUM_CARTAS]);

#endif