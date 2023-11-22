#include "baralho.h"

void criaBaralho(Baralho *baralho){
    int index = 0;

    for (int cor = VERDE; cor <= AZUL; cor++){
        for (int numero = 0; numero < 13; numero++){
            baralho->cartas[index].numero = numero;
            baralho->cartas[index].cor = cor;
            baralho->cartas[index].i_carta = index;

            index++;
        }
    }
    // esse index é só uma flag pra checagem
    //printf("\nINDEX = %i\n", index);

    for (int i = 13; i <= 16; i++){
        baralho->cartas[index].numero = i;
        baralho->cartas[index].cor = PRETO;
        baralho->cartas[index].i_carta = index;
        
        index++;
    }
    
    //printf("INDEX = %i\n\n", index);
    baralho->num_cartas = index;

}

void trocar(Carta *a, Carta *b) {
    Carta aux = *a;
    *a = *b;
    *b = aux;
}

// Tentando usar o algoritmo de knuth pra randomizar (fisher-yates)
void embaralhaArray(Baralho *baralho, int tamanho) {
    srand(time(NULL));

    // Começar do último elemento e ir até o primeiro
    for (int i = tamanho - 1; i > 0; i--) {
        // Gerar um índice aleatório entre 0 e i (inclusive)
        int j = rand() % (i + 1);

        // Trocar os elementos nos índices i e j
        trocar(&baralho->cartas[i], &baralho->cartas[j]);
    }
}

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

// Exibe as cartas atualmente no baralho
void exibeBaralho(Baralho *baralho){
    char *cores[] = {"Verde", "Amarelo", "Vermelho", "Azul", "Preto"};
    char *valor[] = {"0","1","2","3","4","5","6","7","8","9","Pular","Voltar","+2","+4","+4","Coringa","Coringa"};

    for (int i = 0; i < baralho->num_cartas; i++){

        printf("[%.2i] - %s %s\n", baralho->cartas[i].i_carta, valor[baralho->cartas[i].numero], cores[baralho->cartas[i].cor]);
    }
}

// Exibe as 10 cartas atualmente na mão
void exibeMao(Hand *mao){
    char *cores[] = {"Verde", "Amarelo", "Vermelho", "Azul", "Preto"};
    char *valor[] = {"0","1","2","3","4","5","6","7","8","9","Pular","Voltar","+2","+4","+4","Coringa","Coringa"};

    for (int i = 0; i < MAO; i++){

        printf("[%.2i] - %s %s\n", mao->cartas[i].i_carta, valor[mao->cartas[i].numero], cores[mao->cartas[i].cor]);
    }
}

void imprimeResultados(Hand mao, int N){
    Hand mao_aux;
    mao_aux = mao; // Uma copia para não perder a mão original

    printf("\n################################");
    printf("\n####### %iª MÃO DE CARTAS #######\n", N+1);
    printf("################################\n");

    printf("\nMão incial:\n");
    exibeMao(&mao_aux);

    bubbleSort(&mao_aux);
    exibeMao(&mao_aux);

    mao_aux = mao; // Atribui a mão embaralhada novamente para reordenar

    insertSort(&mao_aux);
    exibeMao(&mao_aux);
    
    mao_aux = mao; // Atribui a mão embaralhada novamente para reordenar

    shellSort(&mao_aux);
    exibeMao(&mao_aux);

}