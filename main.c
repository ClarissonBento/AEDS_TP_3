#include "baralho.h"
#include "ordenadores.h"

int main(){
    
    printf("\nModo de execução:\n");
    printf("\n1- Interativo\n2- Por arquivo (em breve)\n\nQual opção? ");
    int aux;
    scanf("%i", &aux);
    if (aux == 1){
        modo_interativo();
    }else if (aux == 2){
        modo_arquivo();
    }else printf("\nInválido bobão\n");
    
    
    
/*
    criaBaralho(&baralho);

    printf("BARALHO INCIAL\n");
    exibeCartas(&baralho, &maozinha, NUM_CARTAS);

    printf("\nEMBARALHADO\n");
    embaralharArray(&baralho, NUM_CARTAS);
    exibeCartas(&baralho, &maozinha, NUM_CARTAS);

    printf("\nCartas no baralho: %i\n", baralho.num_cartas);

    printf("\nPRIMEIRA MÃO\n");
    puxaDez(&baralho, &maozinha);
    exibeMao(&maozinha);

    printf("\nCartas no baralho: %i\n", baralho.num_cartas);

    printf("\nMÃO ORDENADA\n");
    bubbleSort(&maozinha);
    exibeMao(&maozinha);

    printf("\nCartas no baralho: %i\n", baralho.num_cartas);

    printf("\nSEGUNDA MÃO\n");
    puxaDez(&baralho, &maozinha);
    exibeMao(&maozinha);

    printf("\nCartas no baralho: %i\n", baralho.num_cartas);

    printf("\nTERCEIRA MÃO\n");
    puxaDez(&baralho, &maozinha);
    exibeMao(&maozinha);

    printf("\nCartas no baralho: %i\n", baralho.num_cartas);

    printf("\nQUARTA MÃO\n");
    puxaDez(&baralho, &maozinha);
    exibeMao(&maozinha);

    printf("\nCartas no baralho: %i\n", baralho.num_cartas);

    printf("\nQUINTA MÃO\n");
    puxaDez(&baralho, &maozinha);
    exibeMao(&maozinha);

    printf("\nCartas no baralho: %i\n", baralho.num_cartas);

    printf("\nSEXTA MÃO\n");
    puxaDez(&baralho, &maozinha);
    exibeMao(&maozinha);

    printf("\nCartas no baralho: %i\n", baralho.num_cartas);

    printf("\nBARALHO RESTANTE\n");
    exibeBaralho(&baralho);

    printf("\nCartas no baralho: %i\n", baralho.num_cartas);
*/
    return 0;
}