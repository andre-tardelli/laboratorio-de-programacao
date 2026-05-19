#include <stdio.h>
#include "lista.h"
int main() {
 ListaAlunos lista;
 Lista_iniciar(&lista);

 Lista_adicionar(&lista, Aluno_criar(1001, "Ana Silva", 15.5));
 Lista_adicionar(&lista, Aluno_criar(1002, "Bruno Costa", 18.0));
 Lista_adicionar(&lista, Aluno_criar(1003, "Carla Santos", 12.5));

 Lista_listar(&lista);
 return 0;
}
