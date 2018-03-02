#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    printf("SERIE DE FIBONACCI");
    int i = 0;
    long b = 1, c;
    long contador;

    int n = 400;

    //Tipo de dato: short
    short res_short = 0;
    contador = 0;
    b = 1;
    c = 0;
    printf("\n",contador);
    for (i = 0; i < n; i++) {
        c = res_short + b;
        b = res_short;
        res_short = c;
        contador++;
        //printf("\n%i", res_short);
        if (res_short < 0){
            printf("\nEl tipo de dato short entro a overflow con un n = %i", contador);
            break;
        }
    }

    //Tipo de dato: int
    int res_int = 0;
    contador = 0;
    b = 1;
    c = 0;
    for (i = 0; i < n; i++) {
        c = res_int + b;
        b = res_int;
        res_int = c;
        contador++;
        //printf("\n%i", res_int);
        if (res_int < 0){
            printf("\nEl tipo de dato int entro a overflow con un n = %i", contador);
            break;
        }
    }

    //Tipo de dato: long
    long res_long = 0;
    contador = 0;
    b = 1;
    c = 0;
    for (i = 0; i < n; i++) {
        c = res_long + b;
        b = res_long;
        res_long = c;
        contador++;
        //printf("\n%i", res_long);
        if (res_long < 0){
            printf("\nEl tipo de dato long entro a overflow con un n = %i", contador);
            break;
        }
    }
}
