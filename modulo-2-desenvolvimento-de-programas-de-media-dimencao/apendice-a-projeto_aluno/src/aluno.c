#include <stdio.h>
#include "aluno.h"

void Aluno_imprimir(const Aluno *a) {
 printf("[%d] %s - %.1f\n", a->numero, a->nome, a->nota);
}

Aluno Aluno_criar(int num, const char *nome, float nota) {
 Aluno a;
 a.numero = num;
 a.nota = nota;
 snprintf(a.nome, sizeof(a.nome), "%s", nome);
 return a;
}