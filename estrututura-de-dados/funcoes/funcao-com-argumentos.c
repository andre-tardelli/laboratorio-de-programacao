#include <stdio.h>

int soma(int x, int y){ 

    int z = x + y;

    // Verificando endereços de memória e seus respectivos valores
    puts("\n===> FUNCAO <===");
    printf("&x = %p, x = %d\n", &x, x);
    printf("&y = %p, y = %d\n", &y, y);
    printf("&z = %p, z = %d\n", &z, z);

    return z;
}

int main(){

    int a = 3;
    int b = 4;
    int c;

    puts("\n=== ANTES DE CHAMAR A FUNCAO ===");
    printf("&a = %p, a = %d\n", &a, a);
    printf("&b = %p, b = %d\n", &b, b);
    printf("&c = %p, c = %d\n", &c, c);

    c = soma(a, b);
    
    puts("\n=== DEPOIS DE CHAMAR A FUNCAO ===");
    printf("&a = %p, a = %d\n", &a, a);
    printf("&b = %p, b = %d\n", &b, b);
    printf("&c = %p, c = %d\n", &c, c);
    
}