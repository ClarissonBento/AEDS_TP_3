#include "../headers/uno.h"
void refaz(int esq,int dir,Hand *mao){
    int j = esq*2+1;
    Carta aux = mao->cartas[esq];
    printf("passou aqui1 esq: %d dir: %d\n ",esq,dir);
    while (j <= dir+1){
       printf("passou aqui2 esq: %d dir: %d\n ",esq,dir);
 if ((j < dir+1)&&(mao[j].cartas < mao[j+1].cartas)) j++;
 if (aux.i_carta >= mao[j].cartas->i_carta) break;
 mao[esq] = mao[j];
 esq = j; j = esq * 2 ;
 printf("passou aqui3 esq: %d dir: %d\n ",esq,dir);
 }
 mao->cartas[esq]= aux;



}
void criarHeap(Hand *mao){
    int esq;
    int ni;
    int n=10;
    ni= n;
    esq = ni/2;

    
    while (esq>0)
    {
        esq--;
        refaz(esq,ni,mao);
        }
    
}

void heapSort( Hand *mao){
    printf("\nHEAP SORT\n");
    int esq,dir;
    Carta aux;
    criarHeap(mao);
    esq =0;
    dir =mao->cartas->i_carta;
    while (dir>1)
    {
        aux=mao->cartas[0];
        mao->cartas[0]=mao->cartas[dir];
        mao->cartas[dir]=aux;
        dir--;
        refaz(esq,dir,mao);
    }
}
 