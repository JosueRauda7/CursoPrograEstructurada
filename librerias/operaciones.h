
float suma(float valueA, float valueB)
{
    return valueA + valueB;
}

float resta(float valueA, float valueB)
{
    return valueA - valueB;
}

float multiplicacion(float valueA, float valueB)
{
    return valueA * valueB;
}

float division(float valueA, float valueB)
{
    if(valueB == 0)
    {
        printf("No se puede dividir un valor entre 0");
        return 0;
    }
    else
    {
        return valueA / valueB;
    }
}
