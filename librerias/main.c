#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "operaciones.h"

int main()
{
    printf("Librerias!\n");

    float a = 10;
    float b = 15;
    float result;
    int opcion;
    bool bandera = true;

    while(bandera)
    {
        printf("Soy una calculadora\n\n");
        printf("Que operacion deseas realizar?\n");
        printf("1. Suma\n");
        printf("2. Resta\n");
        printf("3. Multiplicacion\n");
        printf("4. Division\n");
        printf("5. Salir\n\n");
        scanf("%i", &opcion);

        switch(opcion)
        {
            case 1:
                result = suma(a, b);
                break;
            case 2:
                result = resta(a, b);
                break;
            case 3:
                result = multiplicacion(a, b);
                break;
            case 4:
                result = division(a, b);
                break;
            case 5:
                bandera = false;
                result = division(a, b);
                break;
            default:
                system("cls");
                main();
                break;
        }
        if(opcion != 5)
        {
            printf("El resultado es: %f \n\n", result);
        }
    }

    return 0;
}
