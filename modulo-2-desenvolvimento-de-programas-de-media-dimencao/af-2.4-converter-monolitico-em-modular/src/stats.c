#include "stats.h"

static int contador = 0; // Acessível apenas dentro de stat.c
static float soma = 0; // Acessível apenas dentro de stat.c

void adicionar_valor(float v) {
    contador++;
    soma += v;
}

float calcular_media() {
    return soma / contador;
}