//switch 

#include <stdio.h>

int main (){

    int x;

    printf ("Intoduce un numero entre 1 y 4: ");
    scanf ("%i",&x);

    switch (x){

        case 1: printf ("Lunes.\n");break;
        case 2: printf ("Martes.\n");break;
        case 3: printf ("Miercoles.\n");break;
        case 4: printf ("Jueves.\n");break;
        default: printf ("El numero no es correcto.\n");
    }

system ("pause");
return 0;

}