#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Iterador Do While\n");

    char answer = 'q';
    char value;

    do
    {
        printf("Ingresa una letra: ");
        scanf("%c", &value);
        printf("\n");
    }while(value != answer);

    int i = 1;

    do
    {
        printf("%i ", i);
        i++;
    }while(i <= 100);

    return 0;
}
