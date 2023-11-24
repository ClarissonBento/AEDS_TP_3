#ifndef CARTA_H
#define CARTA_H

#define NUM_CARTAS 56
#define MAO 10

#define COR_VERDE "\033[32m"
#define COR_AMARELO "\033[33m"
#define COR_VERMELHO "\033[31m"
#define COR_AZUL "\033[34m"
#define COR_PRETO "\033[30m"
#define COR_RESET "\033[0m"
#define COR_CIANO "\033[36m"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef enum {VERDE, AMARELO, VERMELHO, AZUL, PRETO} Cores;

typedef struct {
    int numero;
    Cores cor;
    int i_carta;
} Carta;

void trocar(Carta *a, Carta *b);

#endif