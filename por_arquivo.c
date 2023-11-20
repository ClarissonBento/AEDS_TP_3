#include "baralho.h"
#include "ordenadores.h"

void modo_arquivo(){
    FILE *arquivo;
    arquivo = fopen("TESTE.txt", "r");

    Baralho baralho;
    Hand mao;

    int N;
    int numero;
    char cor[20];
    char especial[20];

    fscanf(arquivo, "%i", &N);
    printf("\nMãos de cartas: %i\n\n", N);

    for (int i = 0; i < N; i++){
        printf("[%i]: ", i);
        for (int j = 0; j < 10; j++){
            fscanf(arquivo, " (%19s %i) ", cor, &numero);
            fscanf(arquivo, " (%19s %s) ", cor, especial);
            printf("%s %i, ", cor, numero);

            if(strcmp(cor, "verde") == 0){
                mao.cartas[j].i_carta = numero;
                mao.cartas[j].cor = VERDE;
            }
            if(strcmp(cor, "amarelo") == 0){
                mao.cartas[j].i_carta = numero + 14;
                mao.cartas[j].cor = AMARELO;
            }
            if(strcmp(cor, "vermelho") == 0){
                mao.cartas[j].i_carta = numero + 27;
                mao.cartas[j].cor = VERMELHO;
            }
            if(strcmp(cor, "azul") == 0){
                mao.cartas[j].i_carta = numero + 40;
                mao.cartas[j].cor = AZUL;
            }
        }
        printf("\n");
    }

    fclose(arquivo);
}