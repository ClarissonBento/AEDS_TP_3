#ifndef BARALHO_H
#define BARALHO_H

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

typedef struct {
    Carta cartas[NUM_CARTAS];
    int num_cartas;
} Baralho;

typedef struct {
    Carta cartas[MAO];
} Hand;



// Cabeçalho de funções
void criaBaralho(Baralho *baralho);
void exibeBaralho(Baralho *baralho);
void trocar(Carta *a, Carta *b);
void embaralhaArray(Baralho *baralho, int tamanho);
void puxaDez(Baralho *baralho, Hand *mao);
void exibeMao(Hand *mao);
void imprimeResultados(Hand mao, int N);
void modo_interativo();
void modo_arquivo();

// Algoritmos de ordenação
void bubbleSort(Hand *mao);
void insertSort(Hand *mao);
void selectionSort(Hand *mao);
void shellSort(Hand *mao);

#endif