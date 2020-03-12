#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Cadena de caracteres!!!\n");

    char nameC[50];
    int size;

    printf("Ingresar el nombre con gets\n");
    gets(nameC);

    printf("El nombre es: ");
    puts(nameC);

    size = strlen(nameC);
    printf("\nEl size es de la cadena es: %i \n", size);

    //Reto

    int maxIndex = size - 1;
    char nameCI[maxIndex];
    int contador = 0;

    for(int i = (size - 1); i >= 0; i--)
    {
        nameCI[contador] = nameC[i];
        contador++;
    }

    printf("El nombre invertido es: \n");
    puts(nameCI);

    return 0;
}
