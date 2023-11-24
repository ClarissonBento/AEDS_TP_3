#include "headers/carta.h"

void trocar(Carta *a, Carta *b) {
    Carta aux = *a;
    *a = *b;
    *b = aux;
}