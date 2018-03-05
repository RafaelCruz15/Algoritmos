#include <iostream>
#include <ctime>

using namespace std;
unsigned t0, t1;

int main()
{
    int a, b, c , d, z;

    //almacena los valores para cada n
    double t_50 [15];
    double t_100 [15];
    double t_150 [15];
    double t_200 [15];
    double t_250 [15];
    double t_300 [15];
    double t_350 [15];
    double t_400 [15];
    double t_450 [15];
    double t_500 [15];

    //contadores
    int cont_50 = 0;
    int cont_100 = 0;
    int cont_150 = 0;
    int cont_200 = 0;
    int cont_250 = 0;
    int cont_300 = 0;
    int cont_350 = 0;
    int cont_400 = 0;
    int cont_450 = 0;
    int cont_500 = 0;

    // arreglo de promedios
    double t_final [10];

    // tamano n = 50, 100, 150, ... , 500
    //for(int a = 50; a <= 500; a+=50){
    for(z = 0; z < 15 ; z++){
        for(int a = 50; a <=500 ; a+=50){
            //cout << "El valor de a es: " << a << "\n";

            // mat1
            int mat1 [a][a];
            // llena la matriz de 1's
            for (b = 0; b < a; b++) {
                for (c = 0; c < a; c++) {
                    mat1[b][c] = 1;
                    //cout << "La matriz1 es: " << mat1[b][c] << "\n";
                }
            }

            // mat2
            int mat2 [a][a];
            // llena la matriz de 1's
            for (b = 0; b < a; b++) {
                for (c = 0; c < a; c++) {
                    mat2[b][c] = 2;
                    //cout << "La matriz2 es: " << mat2[b][c] << "\n";
                }
            }

            //multiplicacion de matrices
            t0 = 0;
            t1 = 0;

            t0 = clock();

            int suma = 0;
            int resultado[a][a];
                for(b = 0; b < a; b++){
                    for(c = 0; c < a; c++){
                        suma = 0;
                        for(d = 0; d < a; d++){
                            suma += mat1[b][d] * mat2[d][c];
                        }
                        resultado[b][c] = suma;
                        //cout << "El resultado de mat1*mat2 es: " << resultado[b][c] << "\n";
                    }
                }

            t1 = clock();

            // tiempo de ejecucion
            double tiempo = (double(t1-t0)/CLOCKS_PER_SEC);


            //pregunta donde esta j para almacenar el tiempo de acuerdo a n
            if (a == 50){
                t_50[cont_50] = tiempo;
                cont_50++;
            } else if( a == 100){
                t_100[cont_100] = tiempo;
                cont_100++;
            } else if( a == 150){
                t_150[cont_150] = tiempo;
                cont_150++;
            } else if( a == 200){
                t_200[cont_200] = tiempo;
                cont_200++;
            } else if( a == 250){
                t_250[cont_250] = tiempo;
                cont_250++;
            } else if( a == 300){
                t_300[cont_300] = tiempo;
                cont_300++;
            } else if( a == 350){
                t_350[cont_350] = tiempo;
                cont_350++;
            } else if( a == 400){
                t_400[cont_400] = tiempo;
                cont_400++;
            } else if( a == 450){
                t_450[cont_450] = tiempo;
                cont_450++;
            } else if( a == 500){
                t_500[cont_500] = tiempo;
                cont_500++;
            }
        }

        // promedios
        double suma_50 = 0;
        for (a = 0; a < 15; a++) {
            suma_50 += t_50[a];
        }
        t_final [0] = (suma_50/15);

        double suma_100 = 0;
        for (a = 0; a < 15; a++) {
            suma_100 += t_100[a];
        }
        t_final [1] = (suma_100/15);

        double suma_150 = 0;
        for (a = 0; a < 15; a++) {
            suma_150 += t_150[a];
        }
        t_final [2] = (suma_150/15);

        double suma_200 = 0;
        for (a = 0; a < 15; a++) {
            suma_200 += t_200[a];
        }
        t_final [3] = (suma_200/15);

        double suma_250 = 0;
        for (a = 0; a < 15; a++) {
            suma_250 += t_250[a];
        }
        t_final [4] = (suma_250/15);

        double suma_300 = 0;
        for (a = 0; a < 15; a++) {
            suma_300 += t_300[a];
        }
        t_final [5] = (suma_300/15);

        double suma_350 = 0;
        for (a = 0; a < 15; a++) {
            suma_350 += t_350[a];
        }
        t_final [6] = (suma_350/15);

        double suma_400 = 0;
        for (a = 0; a < 15; a++) {
            suma_400 += t_400[a];
        }
        t_final [7] = (suma_400/15);

        double suma_450 = 0;
        for (a = 0; a < 15; a++) {
            suma_450 += t_450[a];
        }
        t_final [8] = (suma_450/15);

        double suma_500 = 0;
        for (a = 0; a < 15; a++) {
            suma_500 += t_500[a];
        }
        t_final [9] = (suma_500/15);
    }

    //tiempos de ejecucion
    for (int f = 1; f <= 10; f++) {
        cout << "El tiempo de ejecucion para n = " << f*50 << " es de " << t_final[f] << "\n";
    }
}
