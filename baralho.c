#include "baralho.h"

void criaCarta(Carta* carta, int numero, Cores cor, int i_carta){
    carta->numero = numero;
    carta->cor = cor;
    carta->i_carta = i_carta;
}

void criaBaralho(Baralho *baralho){
    //Carta *carta;
    
    int index = 0;

    for (int cor = VERDE; cor <= AZUL; cor++){
        for (int numero = 0; numero < 13; numero++){
            baralho->cartas[index].numero = numero;
            baralho->cartas[index].cor = cor;
            baralho->cartas[index].i_carta = index;

            //criaCarta(carta, numero, cor, index);
            index++;
        }
    }

    printf("\nINDEX = %i\n", index);

    for (int i = 13; i <= 16; i++){
        baralho->cartas[index].numero = i;
        baralho->cartas[index].cor = PRETO;
        baralho->cartas[index].i_carta = index;
        
        index++;
    }
    
    printf("INDEX = %i\n\n", index);

}

void embaralha(Baralho *baralho){

}

void exibeBaralho(Baralho *baralho){
    char *cores[] = {"Verde", "Amarelo", "Vermelho", "Azul", "Preto"};
    char *valor[] = {"0","1","2","3","4","5","6","7","8","9","Pular","Voltar","+2","+4","+4","Coringa","Coringa"};

    for (int i = 0; i < NUM_CARTAS; i++){
        
        printf("[%.2i] - %s %s\n", baralho->cartas[i].i_carta, valor[baralho->cartas[i].numero], cores[baralho->cartas[i].cor]);
    }
}