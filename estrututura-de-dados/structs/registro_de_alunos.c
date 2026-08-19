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
    livro->num_paginas = num_pagina;
    livro->preco = preco;

    return livro;
}

void print_livro(const Livro *livro){
    printf("Titulo: %s\n", livro->titulo);
    printf("Num. Pagina: %d\n", livro->num_paginas);
    printf("Preco: R$ %.2f\n", livro->preco); // Float com limite de 2 casas decimais;
}

int main() {
    Livro *livro_harry = create_livro("Harry Potter", 200, 25);

    print_livro(livro_harry);
    
    return 0;
}