
#include "geometria.h"
#define PI 3.141159

double areaCirculo(double area)
{
    if(area < 0)
    {
        return 0.0;
    }
    return PI * area * area;
}

double areaRetangulo(double base, double altura)
{
    if(base < 0 || altura < 0)
    {
        return 0.0;
    }

    return base * altura;
}
