#include "../headers/baralho.h"

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

    for (int i = 13; i <= 16; i++){
        baralho->cartas[index].numero = i;
        baralho->cartas[index].cor = PRETO;
        baralho->cartas[index].i_carta = index;
        
        index++;
    }
    
    baralho->num_cartas = index;

}

// Usando o algoritmo de knuth pra randomizar (fisher-yates)
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

// Exibe as cartas atualmente no baralho
void exibeBaralho(Baralho *baralho){
    char *cores[] = {"Verde", "Amarelo", "Vermelho", "Azul", "Preto"};
    char *valor[] = {"0","1","2","3","4","5","6","7","8","9","Pular","Voltar","+2","+4","+4","Coringa","Coringa"};

    for (int i = 0; i < baralho->num_cartas; i++){

        printf("[%.2i] - %s %s\n", baralho->cartas[i].i_carta, valor[baralho->cartas[i].numero], cores[baralho->cartas[i].cor]);
    }
}