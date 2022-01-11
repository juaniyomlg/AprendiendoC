

#include <stdio.h>
#include <stdlib.h>

int main (){

    int x, y, i;
    float suma;

    printf ("cuantos numero quieras calcular la media: ");
    scanf ("%i", &x);

    i = 0;
    suma = 0;

    while (i < x){
        printf ("introduce el %i numero: ", i+1);
        scanf ("%i", &y);
        suma += y;
        i++;
    }
        
    
    
    suma = suma / x;
    printf ("El resultado de la media es : %f. \n",suma);

    system ("pause");
    return 0;
}