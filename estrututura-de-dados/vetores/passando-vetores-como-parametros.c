#include <stdio.h>
#include <stdlib.h> // Biblioteca para NULL, malloc, calloc e free

void soma_vetor_com_escalar(int v[], int n, int escalar) {
    for(int i = 0; i < n; i++) {
        v[i] += escalar;
    }
}

void print_vetor(const int *v, int n) {
    for(int i = 0; i < n; i++) {
        printf("&v[%d] = %p, v[%d] = %d\n", i, &v[i], i, v[i]);
    }
    puts(" ");
}

int main() {

    puts("## VETOR ESTATICO ##");
    int vs[5] = {0, 10, 20, 30, 40};

    print_vetor(vs, 5);
    soma_vetor_com_escalar(vs, 5, 9);
    print_vetor(vs, 5);
    
    puts("## VETOR DINÂMICO ##");
    int *vh = (int *) calloc(5, sizeof(int));
    for(int i = 0; i < 5; i++) {
        vh[i] = i * 100;
    }
    
    print_vetor(vh, 5);
    soma_vetor_com_escalar(vh, 5, 9);
    print_vetor(vh, 5);
    
    // Dsalocando vetor dinâmico
    free(vh);
    vh = NULL;

     return 0;
}