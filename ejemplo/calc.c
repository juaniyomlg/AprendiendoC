
#include <stdio.h>
#include <stdlib.h>

int main ()

int eleccion,operador1,operador2;

printf("CALCULADORA\n\n");
printf("1. Suma\n");
printf("2. Resta\n");
printf("3. Multiplicacion\n");
printf("4. Division\n");
printf("5. Salir\n\n");

scanf("%i",&eleccion);

/*Usamos un switch como altenativa multiple para ejecutar la parte correspondiente a la elección del usuario*/

switch(eleccion)
{
    case 1:
        printf("Introduce un numero: ");
        scanf("%d",&operador1);
        printf("Introduce otro numero: ");
        scanf("%d",&operador2);
        printf("Resultado: %d\n",operador1+operador2);
        break;

    case 2:
        printf("Introduce un numero: ");
        scanf("%d",&operador1);
        printf("Introduce otro numero: ");
        scanf("%d",&operador2);
        printf("Resultado: %d\n",operador1-operador2);
        break;

    case 3:
        printf("Introduce un numero: ");
        scanf("%d",&operador1);
        printf("Introduce otro numero: ");
        scanf("%d",&operador2);
        printf("Resultado: %d\n",operador1*operador2);
        break;

    case 4:
        printf("Introduce un numero: ");
        scanf("%d",&operador1);
        printf("Introduce otro numero: ");
        scanf("%d",&operador2);

    