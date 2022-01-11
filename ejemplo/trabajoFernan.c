//

#include  <stdio.h>
#include <stdlib.h>

int main (){
      int y,z;
      char x[10],w[10];

    printf ("introduzca el nombre del alumno 1: \n",x);
    scanf ("%s",&x);
    printf ("introduzca la nota del alumno 1: \n",y);
    scanf ("%i",&y);
    printf ("introduzca el nombre del alumno 2: \n",w);
    scanf ("%s",&w);
    printf ("introduzca la nota del alumno 2: \n",z);
    scanf ("%i",&z);

    if (y > z){
       printf ("%s ha sacado mas nota que %s\n",x,w);
       
    }else {
       printf ("%s ha sacado mas nota que %s\n",w,x);
    }


    system ("pause");
    return 0;

}