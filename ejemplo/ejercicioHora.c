

#include <stdio.h>
#include <stdlib.h>

int main (){

    int h,min,seg;
    
    printf ("Introduce valor horas: ");
    scanf ("%i",&h);
    printf ("Introduce valor minutos: ");
    scanf ("%i",&min);
    printf ("Introduce valor segundos: ");
    scanf ("%i",&seg);
    
    if (h <= 23 && min <= 59 && seg <= 59){
        seg ++;

        
        if (seg == 60){
            min ++;
            seg = 0;

        }
        if (min == 60){
            h ++;
            min = 0;
        } 
        if (h == 24){
            h = 0;

        }
        printf ("La hora es: %i:%i:%i\n",h,min,seg);
    }  else  {
        printf ("La hora no es correcta. \n");

    }
    system ("pause");
    return 0; 

    }

    
   
    
    
