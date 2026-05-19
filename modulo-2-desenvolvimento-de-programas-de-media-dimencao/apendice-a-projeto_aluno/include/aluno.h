#ifndef ALUNO_H
#define ALUNO_H

/*
 * @file aluno.h
 * @brief Definição da estrutura para representar um aluno e funções relacionadas
 */
typedef struct
{
    int numero;
    char nome[50];
    float nota;
}Aluno;

/* 
 * @brief Imprime as informações de um aluno
 * @param a Ponteiro para o aluno a ser impresso
 */
void Aluno_imprimir(const Aluno* a);

/* 
 * @brief Cria um novo aluno
 * @param numero Número do aluno
 * @param nome Nome do aluno
 * @param nota Nota do aluno
 * @return Estrutura Aluno inicializada
 */
Aluno Aluno_criar(int numero, const char* nome, float nota);

#endif 

