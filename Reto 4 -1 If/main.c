#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 5;
    int var;

    printf("Adivina el numero\n");
    printf("Trata de adivinar el numero entre el 1 al 10\n Ingresa el numero: ");
    scanf("%i", &var);

    if(var == x)
    {
        printf("Adivinaste");
    }
    else
    {
        printf("Ese no es. Perdiste!");
    }

    return 0;
}
