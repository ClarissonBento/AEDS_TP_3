#ifndef BARALHO_H
#define BARALHO_H

#define NUM_CARTAS 56

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef enum {VERDE, AMARELO, VERMELHO, AZUL, PRETO} Cores;

typedef struct {
    int numero;
    Cores cor;
    int i_carta;
} Carta;

typedef struct {
    Carta *cartas[NUM_CARTAS];
} Baralho;

void criaCarta(Carta* carta, int numero, Cores cor, int i_carta);
void criaBaralho(Carta baralho[]);
void embaralha(Baralho *baralho);
void exibeBaralho(Carta baralho[]);

#endif