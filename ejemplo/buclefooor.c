//while


#include<stdio.h>
int main()
{
    int x, n, y, suma, z;
    printf("Cantidad de numeros para hacer media: \n");
    scanf("%d", &x);
    n=0;
    suma=0;
    for(n=1; n<=x; n++){
        printf("Introduce el %d numero: \n", n);
        scanf("%d", &y);
        suma+=y;
    }

    z=suma/x;
    printf("La media es: %d\n", z);

    return 0;
}


