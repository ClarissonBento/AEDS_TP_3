#ifndef UNO_H
#define UNO_H

#include "carta.h"
#include "baralho.h"

typedef struct {
    Carta cartas[MAO];
} Hand;

//Cabeçalho de funções
void puxaDez(Baralho *baralho, Hand *mao);
void exibeMao(Hand *mao);
void imprimeResultados(Hand mao, int N);
void modo_interativo();
void modo_arquivo();

// Algoritmos de ordenação
void bubbleSort(Hand *mao);
void selectionSort(Hand *mao);
void insertSort(Hand *mao);
void shellSort(Hand *mao);
void quickSort(Hand *mao);
void heapSort(Hand *mao);

#endif