#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Arreglos unidimensionales!\n");

    int integerList[3];

    integerList[0] = 4;
    integerList[1] = 5;
    integerList[2] = 6;

    float floatList[] = {24.4, 34.5, 46.6, 21.8, 56.7};

    char charList[4];

    charList[0] = 'D';
    charList[1] = 'a';
    charList[2] = 'n';
    charList[3] = 'i';

    printf("\n Primer entero: \t\t %i", integerList[0]);
    printf("\n Ultimo flotante: \t\t %f", floatList[5]);
    printf("\n Lista de caracteres: \t\t %c, %c, %c, %c", charList[0], charList[1], charList[2], charList[3]);

    //Reto

    int numeros[] = {0, 0, 0, 0, 0};
    int multiplicacion;

    printf("\n\nIngresa los valores:\n");

    printf("Valor 1:\t");
    scanf("%i", &numeros[0]);

    printf("\nValor 2:\t");
    scanf("%i", &numeros[1]);

    printf("\nValor 3:\t");
    scanf("%i", &numeros[2]);

    printf("\nValor 4:\t");
    scanf("%i", &numeros[3]);

    printf("\nValor 5:\t");
    scanf("%i", &numeros[4]);

    multiplicacion = numeros[0] * numeros[1] * numeros[2] * numeros[3] * numeros[4];
    printf("\nLa multiplicacion de los 5 numeros es: %i", multiplicacion);

    return 0;
}
