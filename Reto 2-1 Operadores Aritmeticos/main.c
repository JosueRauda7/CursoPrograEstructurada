#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float radio;
    float altura;
    radio = altura = 0;

    float area;
    float volumen;
    const pi = 3.1416;
    area = volumen = 0;

    printf("Calcularemos el volumen y area de un cilindro");
    printf("\nIngresa el radio del cilindro: ");
    scanf("%f", &radio);
    printf("\nIngresa la altura del cilindro: ");
    scanf("%f", &altura);

    area = pi * (pow(radio,2));
    volumen = area * altura;

    printf("\nArea del cilindro: %f", area);
    printf("\nVolumen del cilindro: %f", volumen);

    return 0;
}
