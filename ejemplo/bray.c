

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main (){
int e;
//int suma, resta, multiplica, divide;
float x,y,s,r,m,d;
    x = 4;
    y = 6;


//printf("introduce el numero x\n");
//scanf("%f", &x);
//printf("introduce el numero y\n");
//scanf("%f", &y);

    s = x + y;
    r = x - y;
    m = x * y;
    d = x/y;

printf("CALCULADORA\n\n");
    printf("1. Suma\n");
    printf("2. Resta\n");
    printf("3. Multiplicacion\n");
    printf("4. Division\n");
scanf("%i", &e);

switch (e){
    case 1:  printf("el resultado es %f\n",s);break;
    case 2: printf("el resultado es %f\n",r);break;
    case 3: printf("el resultado es %f\n",m);break;
    case 4: printf("el resultado es %.2f\n",d);break; //truncar decimales
    default: printf ("el resultado no es correcto\n");
}

system ("pause");
return 0;
}