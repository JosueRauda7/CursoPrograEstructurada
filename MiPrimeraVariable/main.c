#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    //Declaración de variables
    int integerA;
    float floatA;
    double doubleA;
    char letterA;
    bool boolean;

    //INPUTS
    //Pidiendo valor de entero A
    printf("Ingresa el valor de un entero A: ");
    //Recibiendo valor de entero A
    scanf("%i", &integerA);

    //Pidiendo valor de float A
    printf("Ingresa el valor de un float A: ");
    //Recibiendo valor de float A
    scanf("%f", &floatA);

    //Pidiendo valor de double A
    printf("Ingresa el valor de un double A: ");
    //Recibiendo valor de double A
    scanf("%f", &doubleA);

    //Pidiendo valor de letter A
    printf("Ingresa el valor de un letter A: ");
    //Recibiendo valor de letter A
    scanf(" %c", &letterA);

    //OUTPUTS
    printf("\n\n");
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
    //printf("\n\tEl valor de nuestro entero A es: %i, \n\tEl valor de mi flotante A es: %f,\n\tEl valor de mi double A es: %f,\nEl valor de mi caracter A es: %c", integerA, floatA, doubleA, letterA);

    return 0;
}
