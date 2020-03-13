#include <stdio.h>
#include <stdlib.h>

struct personalData
{
    char name[20];
    char apellido [20];
    int edad;
};

int main()
{
    printf("Estructura de Datos!\nArchivos - Guardar en un archivo\n");

    struct personalData person;

    FILE *archivo;
    //archivo = fopen("DatosPersonales001.dat", "wb");
    archivo = fopen("DatosPersonales001.dat", "rb");

    if(archivo != NULL)
    {
        /*fflush(stdin);

        printf("Ingresar los datos: \n\n");

        printf("\nNombre: \n");
        gets(person.name);
        printf("\nApellido: \n");
        gets(person.apellido);
        printf("\nEdad: \n");
        scanf("%i", &person.edad);

        printf("\n\nLeer los datos: \n\n");

        printf("\nNombre: %s\n", person.name);
        printf("\nApellido: %s\n", person.apellido);
        printf("\nEdad: %i\n", person.edad);

        fwrite(&person, sizeof(person), 1, archivo);*/

        fread(&person, sizeof(person), 1, archivo);

        printf("\n\nImprimiendo los datos...   \n\n");

        printf("\nNombre: %s\n", person.name);
        printf("\nApellido: %s\n", person.apellido);
        printf("\nEdad: %i\n", person.edad);

        fclose(archivo);
    }
    else
    {
        printf("El archivo no se ha creado");
    }

    return 0;
}
