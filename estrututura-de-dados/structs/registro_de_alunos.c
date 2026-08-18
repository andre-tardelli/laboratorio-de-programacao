#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _livro {
    char titulo[100];
    unsigned int num_paginas; // Unsigned usado para retornar apenas números inteiros;
    float preco;
} Livro;

// Construtor para Livros
Livro *create_livro(char *titulo, unsigned int num_pagina, float preco) {
    Livro *livro = calloc(1, sizeof(Livro));

    strcpy(livro->titulo, titulo);
    livro->num_paginas, num_pagina;
    livro->preco, preco;
    
    return livro;
}