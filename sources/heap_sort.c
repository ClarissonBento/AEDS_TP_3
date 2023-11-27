#include "headers/uno.h"
void heapSort( Hand *mao){
    
}
void criarHeap(Hand *mao){
    int esq;
    int n=10;
    esq = n/2+1;
    while (esq>1)
    {
        esq--;
        //refaz(esq,n,*mao);
        }
    
}
void refaz(int esq,int dir,Hand *mao){
    int j = esq*2;
    Carta aux = mao->cartas[esq];
    while (j <= dir){
 if ((j < dir)&&(mao[j].cartas < mao[j+1].cartas)) j++;
 if (aux.i_carta >= mao[j].cartas) break;
 mao[esq] = mao[j];
 esq = j; j = esq * 2 ;
 }
 //mao[esq].cartas = aux;



}

