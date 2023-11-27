#include "../headers/uno.h"

int main(){

    printf("\nModo de execução:\n");
    printf("\n1- Interativo\n2- Por arquivo\n\nQual opção? ");
    int aux;
    scanf("%i", &aux);
    if (aux == 1){
        modo_interativo();
    }else if (aux == 2){
        modo_arquivo();
    }else printf("\nOpção inválida\n");


    
    return 0;
}