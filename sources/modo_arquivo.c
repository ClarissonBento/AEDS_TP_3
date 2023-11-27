#include "../headers/uno.h"

int extraiTipo(char tipo[20]);

void modo_arquivo(){
    FILE *arquivo;
    arquivo = fopen("ENTRADA.txt", "r");

    Hand mao;

    int N, numero;
    char cor[20], tipo[20];

    fscanf(arquivo, "%i", &N);
    printf("\nMãos de cartas: %i\n", N);

    for (int i = 0; i < N; i++){
        
        for (int j = 0; j < MAO; j++){

            fscanf(arquivo, " (%s %s) ", cor, tipo);

            if(strcmp(cor, "Verde") == 0){
                mao.cartas[j].cor = VERDE;
                numero = extraiTipo(tipo);
                mao.cartas[j].numero = numero;
                mao.cartas[j].i_carta = numero;
            }
            if(strcmp(cor, "Amarelo") == 0){
                mao.cartas[j].cor = AMARELO;
                numero = extraiTipo(tipo);
                mao.cartas[j].numero = numero;
                mao.cartas[j].i_carta = numero + 13;
            }
            if(strcmp(cor, "Vermelho") == 0){
                mao.cartas[j].cor = VERMELHO;
                numero = extraiTipo(tipo);
                mao.cartas[j].numero = numero;
                mao.cartas[j].i_carta = numero + 26;
            }
            if(strcmp(cor, "Azul") == 0){
                mao.cartas[j].cor = AZUL;
                numero = extraiTipo(tipo);
                mao.cartas[j].numero = numero;
                mao.cartas[j].i_carta = numero + 39;
            }
            if(strcmp(cor, "Preto") == 0){
                mao.cartas[j].cor = PRETO;
                numero = extraiTipo(tipo);
                mao.cartas[j].numero = numero;
                mao.cartas[j].i_carta = numero + 39;
            }

        }
        imprimeResultados(mao, i);
    }
    fclose(arquivo);
}

// Função que lê as cartas especiais "Pular"/"Voltar/"+2"/"+4"/"Coriga" e converte em numero 
int extraiTipo(char tipo[20]){
    int numero;

    if (strcmp(tipo, "Pular)") == 0){
        numero = 10;
    }else if (strcmp(tipo, "Voltar)") == 0){
        numero = 11;
    }else if (strcmp(tipo, "+2)") == 0){
        numero = 12;
    }else if (strcmp(tipo, "+4)") == 0){
        numero = 13;
    }else if (strcmp(tipo, "Coringa)") == 0){
        numero = 15;
    }else numero = atoi(tipo);

    return numero;
}