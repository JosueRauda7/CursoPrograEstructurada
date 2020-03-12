#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Arreglos e iteradores unidimensionales!\n");

    int integerArray[11];

    for(int i = 0; i < 11; i++)
    {
        integerArray[i] = i*i;
        printf("\nPosicion (%i): %i", i, integerArray[i]);
    }

    //Reto

    int cantidad = 0;
    int mayor;

    printf("\n\nIngrese la cantidad de numeros a comparar:\t");
    scanf("%i", &cantidad);

    int numeros[cantidad];

    for(int i = 0; i < cantidad; i++)
    {
        printf("\nValor(%i):", i);
        scanf("%i", &numeros[i]);
        if(i == 0)
        {
            mayor = numeros[i];
        }
        else
        {
            if(mayor < numeros[i])
            {
                mayor = numeros[i];
            }
        }
    }

    printf("\nEl mayor entre ellos es: %i \n", mayor);

    return 0;
}
