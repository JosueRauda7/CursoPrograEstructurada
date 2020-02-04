#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Condicion If, else, else if\n");

    float a, b, c;

    a = 50;
    b = 100;
    c = 150;

    printf("Condicion\n");

    if(a == b)
    {
        printf("No se va a cumplir esta condicion");
    }
    else if(b == c)
    {
        printf("Tampoco esta");
    }
    else
    {
        printf("Ninguna condicion se cumplio\n");
        printf("Despues de esta linea el programa va a terminar");
    }

    return 0;
}
