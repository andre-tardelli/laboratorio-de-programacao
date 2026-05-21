#include <stdio.h>

int main(){

    int a, b, *p1, *p2; // Declaração de variáveis e ponteiros do tipo inteiro

    a = 4;
    b = 3;
    p1 = &a; // p1 recebe endereço de a;
    p2 = p1; // p2 recebe conteúdo de p1 (Endereço de memória - &a)
    *p2 = *p1 + 3; b = b * (*p1); (*p2)++;
    p1 = &b;

    printf("%d %d\n", *p1, *p2);
    printf("%d %d\n", a, b);    

}