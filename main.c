#include "baralho.h"

void bubbleSort(Hand *mao);
void insertSort(Hand *mao);

int main(){
    Baralho baralho;
    Hand maozinha;

    printf("1- Interativo\n2- Por arquivo\nQual opção? ");
    int aux;
    scanf("%i", &aux);
    if (aux == 1){
        criaBaralho(&baralho);
        embaralhaArray(&baralho, NUM_CARTAS);

        printf("Quantas mãos de cartas? ");
        scanf("%i", &aux);

        for (int i = 0; i < aux; i++){
            puxaDez(&baralho, &maozinha);
            printf("\n### %iº MÃO DE CARTAS ###\n", i+1);
            exibeMao(&maozinha);
            printf("\n### MÃO %i ORDENADA ###\n", i+1);
            //bubbleSort(&maozinha);
            insertSort(&maozinha);
            exibeMao(&maozinha);
        }
        
    }
    
    
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