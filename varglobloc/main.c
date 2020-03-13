#include <stdio.h>
#include <stdlib.h>

//Variable global
char publicText[] = {"Texto en una variable global"};

void check()
{
    printf("\n\nImprimir desde la funcion: check");
    printf("\nVariable global: ");
    printf("%s", publicText);

    printf("\nVariable local: \n");
    /*
    printf("%s", privateText);
    */
}

int main()
{
    //Variable local
    char privateText[] = {"Texto en una variable local \n"};

    printf("Variables locales y globales!\n");

    printf("\nVariable global: ");
    printf("%s", publicText);

    printf("\nVariable local: ");
    printf("%s", privateText);

    check();

    return 0;
}
