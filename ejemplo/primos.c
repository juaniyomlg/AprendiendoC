//Saber si un numero es primo

#include <stdio.h>
#include <stdlib.h>

int main (){

    int n, i, j, aux;

    printf ("Introduce un numero cualquiera:");
    scanf ("%i", &n);

    j = 0;

    for (i = 2; i < n; i++){
        aux = n % i;
        if (aux == 0){
            j = 1;
        }
    }

    if (j == 1){
        printf ("%i No es primo.\n",n);
    }
    else {
        printf ("%i Es primo.\n",n);
    }
    system ("pause");
    return 0;
}