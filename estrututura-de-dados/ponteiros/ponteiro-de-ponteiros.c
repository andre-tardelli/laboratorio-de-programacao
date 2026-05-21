#include <stdio.h>

int main(){

        int a = 10;
        int *p1 = &a;
        int **p2 = &p1;

        
        printf("\n&p2 = %p, p2 = %p, **p2 = %d\n", &p2, p2, **p2);
        printf("\n&p1 = %p, p1 = %p, *p1 = %d\n", &p1, p1, *p1);
        printf("\n&a = %p, a = %d\n", &a, a);

        **p2 = 99;

        printf("\n&p2 = %p, p2 = %p, **p2 = %d\n", &p2, p2, **p2);
        printf("\n&p1 = %p, p1 = %p, *p1 = %d\n", &p1, p1, *p1);
        printf("\n&a = %p, a = %d\n", &a, a);

}