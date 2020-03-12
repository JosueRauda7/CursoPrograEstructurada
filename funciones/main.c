#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int sumar(int a, int b)
{
    return a + b;
}

int exponente(int a,int b)
{
    return pow(a, b);
}

float dolarBTC(float a)
{
    return a * 0.00016;
}

void main()
{
    printf("Funciones!\n");

    int addition = sumar(3, 4);

    printf("El resultado es: %i \n", addition);

    //Reto 1

    printf("El resultado de 2 a la 3 es: %i", exponente(2, 3));

    //Reto 2

    float valor;

    printf("\n\nEscribe la cantidad que quieras cambiar: ");
    scanf("%f", &valor);

    printf("\nSon %f bitcoins", dolarBTC(valor));

}
