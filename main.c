#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    char seguir='s';
    int opcion=0;
    float numero1, numero2, resultado;



    while(seguir=='s')
    {
        printf("1- Ingresar 1er operando (A=x)\n");
        printf("2- Ingresar 2do operando (B=y)\n");
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                printf("Ingrese un numero: ");
                scanf("%f",&numero1);
                break;
            case 2:
                printf("Ingrese un numero: ");
                scanf("%f",&numero2);
                break;
            case 3:
                resultado = sumar(numero1,numero2);
                printf("La suma es %f", resultado);
                break;
            case 4:
                resultado = resta(numero1,numero2);
                printf("La resta es %f", resultado);
                break;
            case 5:
                resultado = division(numero1,numero2);
                printf("La division es %f", resultado);
                break;
            case 6:
                resultado = multiplicacion(numero1,numero2);
                printf("La multiplicacion es %f", resultado);
                break;
            case 7:
                resultado = factorial(numero1);
                printf("El factorial es %f",resultado);
                break;
            case 8:
                resultado = sumar(numero1,numero2);
                printf("La suma es %f", resultado);
                resultado = resta(numero1,numero2);
                printf("La resta es %f", resultado);
                resultado = division(numero1,numero2);
                printf("La division es %f", resultado);
                resultado = multiplicacion(numero1,numero2);
                printf("La multiplicacion es %f", resultado);
                resultado = factorial(numero1);
                printf("El factorial es %f",resultado);
                break;
            case 9:
                printf("Saliendo...\n\n");seguir = 'n';
                break;
        }
    }


    return 0;
}


