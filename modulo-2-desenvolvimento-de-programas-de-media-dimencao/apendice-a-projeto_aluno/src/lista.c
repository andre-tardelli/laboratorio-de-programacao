#include <stdio.h>
#include "lista.h"
void Lista_iniciar(ListaAlunos *l) {
 l->count = 0;
}
int Lista_adicionar(ListaAlunos *l, Aluno a) {
 if (l->count >= LISTA_TAM_MAX) return 0;
 l->alunos[l->count++] = a;
 return 1;
}
void Lista_listar(const ListaAlunos *l) {
 printf("=== Lista de Alunos (%d) ===\n", l->count);
 for (int i = 0; i < l->count; i++) {
 Aluno_imprimir(&l->alunos[i]);
 }
}