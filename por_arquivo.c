#include "baralho.h"
#include "ordenadores.h"

void modo_arquivo(){
    FILE *arquivo;
    arquivo = fopen("TESTE.txt", "r");

    if (arquivo == NULL) {
        perror("Erro ao abrir o arquivo");
        exit(EXIT_FAILURE);
    }

    int N;
    char cor[20];
    char numero[20];

    fscanf(arquivo, "%i", &N);
    printf("\nMãos de cartas: %i\n\n", N);

    for (int i = 0; i < N; i++){
        printf("[%i]: ", i);
        for (int j = 0; j < 10; j++){
            fscanf(arquivo, "%s %s", cor, numero);
            printf("%s %s, ", cor, numero);
        }
        printf("\n");
    }




    fclose(arquivo);
}