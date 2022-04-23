#ifndef FUNCIONES_HPP
#define FUNCIONES_HPP

int suma(int a, int b)
{
    return a + b;
}

int resta(int a, int b)
{
    if (a < 0)
    {
        return 0;
    }
    
    return a - b;
}

#endif