//calcular la medua de x numeros introducidos por teclado

#include <stdio.h>
#include <stdlib.h>

int main (){

    int i,sum;
    sum = 0;

    for (i = 2; i <=1000; i+= 2){
       //if (i%2 == 0){
        sum += i;
        printf ("%i \n", i);
        //}
    
    }
    printf ("El resultado de la suma es: %i \n", sum);

     system ("pause");
     return 0;
}