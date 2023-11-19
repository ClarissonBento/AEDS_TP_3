#include "baralho.h"

void criaCarta(Carta* carta, int numero, Cores cor, int i_carta){
    carta->numero = numero;
    carta->cor = cor;
    carta->i_carta = i_carta;
}

void criaBaralho(Carta baralho[]){
    //Carta *carta;

   // for (int i = 0; i < NUM_CARTAS; i++)
  //  {
        //baralho->cartas[i]->cor = 0;
        //baralho->cartas[i]->numero = 0;
        //baralho->cartas[i]->i_carta = i;
   // }
    
    int index = 0;

    for (int cor = VERDE; cor <= AZUL; cor++){
        for (int numero = 0; numero < 13; numero++){
            baralho[index].numero = numero;
            baralho[index].cor = cor;
            baralho[index].i_carta = index;

            //criaCarta(carta, numero, cor, index);
            index++;
        }
    }

    printf("\nINDEX = %i\n", index);

    //for (int i = 0; i < 13; i++)
    //{
   //     baralho->cartas[i] = carta;
   // }

   for (int i = 13; i <= 16; i++){

    baralho[index].numero = i;
    baralho[index].cor = PRETO;
    baralho[index].i_carta = index;

    index++;

   }
   
    
/*
    for (index; index < NUM_CARTAS; index++){
        baralho[index].numero = index;
        baralho[index].cor = PRETO;
        baralho[index].i_carta = index;
    }
*/


    /*int index = 0;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 13; j++) {
            baralho->cartas[index].numero = j;
            index++;
        }
    }*/
    
}

void embaralha(Baralho *baralho){

}

void exibeBaralho(Carta baralho[]){
    //Carta carta;
    char *cores[] = {"Verde", "Amarelo", "Vermelho", "Azul", "Preto"};
    char *valor[] = {"0","1","2","3","4","5","6","7","8","9","Pular","Voltar","+2","+4","+4","Coringa","Coringa"};

    //printf("[%i]\n", baralho->cartas->numero);

    for (int i = 0; i < NUM_CARTAS; i++)
    {
        printf("[%.2i] - %s %s\n", baralho[i].i_carta, valor[baralho[i].numero], cores[baralho[i].cor]);
    }
    
}