#include "funciones.h"

float sumar(float x,float y)
{
    float retorno;

    retorno = x + y;

    return retorno;
}

float resta(float x,float y)
{
    float retorno;

    retorno = x - y;

    return retorno;
}

float division(float x,float y)
{
   if(y != 0) {return (float)x/y;}
    else {
        printf("La division entre cero no esta permitida. ");
        return -1;
    }
         /*regresa la division de los dos numeros introducidos*/
    return 0;
}

float multiplicacion(float x,float y)
{
    float retorno;

    retorno = x * y;

    return retorno;
}

float factorial (int x)
{
   float i;
   float fac = 1;
   for (i=1; i<=x; i=i+1) fac=fac*i;
   return (fac);
}
