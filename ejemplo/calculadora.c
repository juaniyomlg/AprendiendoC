//calculadora
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main (){
//int s,r,m,d;
//int suma, resta, multiplica, divide;
int e;
float x,y ;

printf ("Calculadora. \n\n");
printf("introduce el numero x\n");
scanf("%f", &x);
printf("introduce el numero y\n");
scanf("%f", &y);
printf("CALCULADORA\n\n");
    printf("1. Suma\n");
    printf("2. Resta\n");
    printf("3. Multiplicacion\n");
    printf("4. Division\n");
scanf("%i", &e);

switch (e){
    case 1:  printf("el resultado es %f\n",s);break;
    case 2: printf("el resultado es %f\n",x - y);break;
    case 3: printf("el resultado es %f\n",x * y);break;
    case 4: printf("el resultado es %f\n",x/y);break;
    default: printf ("No es posible hacer esa operacion.\n");
}

system ("pause");
return 0;
}