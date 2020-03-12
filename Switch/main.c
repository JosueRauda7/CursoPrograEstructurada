#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Condicional Switch!\n");

    int option;

    scanf("%i", &option);

    switch(option)
    {
    case 1:
        printf("Elegiste el numero 1\n");
        break;
    case 2:
        printf("Elegiste el numero 2\n");
        break;
    case 3:
        printf("Elegiste el numero 3\n");
        break;

    default:
        printf("Elegiste una opcion invalida\n");
        break;
    }

    option = 0;

    printf("\nJuego de opciones!!!\n\n");
    printf("Elige una opcion para continuar la historia\n\n");
    printf("1. El peregrino se va por el camino que le indica evangelista\n");
    printf("2. El peregrino se va por el camino mas corto\n");
    printf("3. El peregrino se va por el camino que le indica sabio mondano\n");
    scanf("%i", &option);

    switch(option)
    {
    case 1:
        printf("Llega al reino de Dios. Ganaste!!!\n");
        break;
    case 2:
        printf("Pasa por el monte de la desesperación y es encarcelado. Perdiste!!!\n");
        break;
    case 3:
        printf("Termina cayendo en la trampa del mundo. Perdiste!!!");
        break;
    default:
        printf("Eligiste una opcion que no existe. Perdiste!!!\n");
        break;
    }

    return 0;
}
