/**
* @file lista.h
* @brief Definição de lista de alunos
*/

#ifndef LISTA_H
#define LISTA_H
#include "aluno.h"
#define LISTA_TAM_MAX 100 /**< Tamanho máximo da lista */

/**
* @struct ListaAlunos
* @brief Estrutura que representa uma lista de alunos
*/

typedef struct {
 Aluno alunos[LISTA_TAM_MAX]; /**< Array de alunos */
 int count; /**< Número atual de alunos */
} ListaAlunos;

void Lista_iniciar(ListaAlunos *l);
int Lista_adicionar(ListaAlunos *l, Aluno a);
void Lista_listar(const ListaAlunos *l);

#endif