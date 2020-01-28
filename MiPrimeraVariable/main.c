#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int integerA = 1;
    float floatA = 1.1;
    double doubleA = 1.2;
    char letterA = 'A';
    bool boolean = false;

    //En la siguiente línea estamos imprimiendo mi variable integerA
    printf("El valor de nuestro entero A es: %i", integerA);
    //Vamos a imprimir un float
    printf("\nEl valor de mi flotante A es: %f", floatA);

    //Vamos con el double
    //Es %f porque entra en la familia float
    printf("\nEl valor de mi double A es: %f", doubleA);

    //Caracter
    printf("\nEl valor de mi caracter A es: %c", letterA);

    //Todo en una sola línea
    printf("\n\tEl valor de nuestro entero A es: %i, \n\tEl valor de mi flotante A es: %f,\n\tEl valor de mi double A es: %f,\nEl valor de mi caracter A es: %c", integerA, floatA, doubleA, letterA);

    return 0;
}
