#include "headers/uno.h"

// Compra 10 cartas pra mão
void puxaDez(Baralho *baralho, Hand *mao){

    if (baralho->num_cartas < 10){
        printf("Cartas insuficientes no baralho\n");
        exit(0);
    }

    for (int i = 0; i < MAO; i++){
        mao->cartas[i] = baralho->cartas[i];

        for (int j = i; j < baralho->num_cartas - 1; j++) {
            baralho->cartas[j] = baralho->cartas[j + 1];
        }
        baralho->num_cartas--; // Atualizar o número de cartas no baralho
    }
    
}

// Exibe as 10 cartas atualmente na mão
void exibeMao(Hand *mao){
    char *cores[] = {COR_VERDE "Verde", COR_AMARELO "Amarelo", COR_VERMELHO "Vermelho", COR_AZUL "Azul", COR_RESET "Preto"};
    char *valor[] = {"0","1","2","3","4","5","6","7","8","9","Pular","Voltar","+2","+4","+4","Coringa","Coringa"};

    for (int i = 0; i < MAO; i++){

        printf("[%.2i] - %s %s%s\n", mao->cartas[i].i_carta, valor[mao->cartas[i].numero], cores[mao->cartas[i].cor], COR_RESET);
    }
}

void imprimeResultados(Hand mao, int N){
    Hand mao_aux;
    mao_aux = mao; // Uma copia para não perder a mão original

    printf(COR_CIANO "\n################################");
    printf(COR_CIANO "\n####### %iª MÃO DE CARTAS #######\n", N+1);
    printf(COR_CIANO "################################\n" COR_RESET);

    printf("\nMão incial:\n");
    exibeMao(&mao_aux);

    bubbleSort(&mao_aux);
    exibeMao(&mao_aux);

    mao_aux = mao; // Atribui a mão embaralhada novamente para reordenar

    selectionSort(&mao_aux);
    exibeMao(&mao_aux);

    mao_aux = mao; // Atribui a mão embaralhada novamente para reordenar

    insertSort(&mao_aux);
    exibeMao(&mao_aux);
    
    mao_aux = mao; // Atribui a mão embaralhada novamente para reordenar

    shellSort(&mao_aux);
    exibeMao(&mao_aux);

    mao_aux = mao; // Atribui a mão embaralhada novamente para reordenar

    quickSort(&mao_aux);
    exibeMao(&mao_aux);

}