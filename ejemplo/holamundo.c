#include <stdio.h>

int main(){

    int a, b, c;
    int d, e = 4;

    pri2ntf("Introduce un numero:\n");
    scanf("%d", &a);
    printf("Intoduce un segundo numero\n");
    scanf("%d", &b);

    if(a>=b){
        c  = a + b;
    }else{
        c = a * b;
    }


    d = ++e;

    printf("El resultado es:%d %d", c, d);

    return 0;

}