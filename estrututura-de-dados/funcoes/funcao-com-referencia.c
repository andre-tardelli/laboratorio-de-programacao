#include <stdio.h>

void soma(int x, int y, int *z){
    *z = x + y;
    
    printf("\n&x = %p, x = %d\n", &x, x);
    printf("&y = %p, y = %d\n", &y, y);
    printf("&z = %p, *z = %p\n", &z, z);
}

int main(){
    int a = 10;
    int b = 20;
    int c;
        
    soma(a, b, &c);

    printf("\n&a = %p, a = %d\n", &a, a);
    printf("&b = %p, b = %d\n", &b, b);
    printf("&c = %p, c = %d\n", &c, c);
    
}