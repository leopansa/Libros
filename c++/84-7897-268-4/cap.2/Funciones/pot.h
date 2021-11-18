//pot.h
#include <math.h>

int pot (int x, int y)
{
    return exp( y * log(double(x)) );
}

int pot (double x, double y)
{
    return exp( y * log(x) );
}

int pot (int x, double y)
{
    return exp( y * log(double(x)) );
}

int pot (double x, int y)
{
    return exp( y * log(x) );
}