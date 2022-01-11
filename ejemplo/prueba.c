//Declaramos una variable entera

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main (){

    srand (time(NULL));

    int x, num;

    x = rand ()%11;
    printf ("%i\n",x);
    printf ("Introduce un numero: \n");
    scanf ("%i",&num);

    if (num == x){
       printf ("Correcto\n");
       
    }else {
       printf ("El numero correcto es: %i\n",x);
    }

    system ("pause");
    return 0;
    

}