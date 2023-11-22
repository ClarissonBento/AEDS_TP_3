#include "baralho.h"

int main(){

    int comparacoes = 0, movimentacoes = 0;
    double tempo_gasto;
    
    printf("\nModo de execução:\n");
    printf("\n1- Interativo\n2- Por arquivo\n\nQual opção? ");
    int aux;
    scanf("%i", &aux);
    if (aux == 1){
        modo_interativo();
    }else if (aux == 2){
        modo_arquivo();
    }else printf("\nInválido bobão\n");


    
    return 0;
}