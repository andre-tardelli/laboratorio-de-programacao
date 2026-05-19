#include <stdio.h>
#include "geometria.h"

int main()
{
    double areaCirc = areaCirculo(5.0);
    printf("\nÁrea círculo (r=5): %.2f\n", areaCirc);

    double areaRet = areaRetangulo(3.0, 4.0);
    printf("Área retangulo (3x4): %2.f", areaRet);
}