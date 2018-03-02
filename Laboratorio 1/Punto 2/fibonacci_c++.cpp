#include <iostream>

using namespace std;

int main()
{
    cout << "SERIE DE FIBONACCI" << endl;
    int i = 0;
    long b = 1, c;
    long contador;

    int n = 400;

    //Tipo de dato: short
    short res_short = 0;
    contador = 0;
    b = 1;
    c = 0;
    for (i = 0; i < n; i++) {
        c = res_short + b;
        b = res_short;
        res_short = c;
        contador++;
        //cout << contador << ": " << res_short << endl;
        if (res_short < 0){
            cout << "El tipo de dato short entro a overflow con un n = " << contador << endl;
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
        //cout << contador << ": " << res_int << endl;
        if (res_int < 0){
            cout << "El tipo de dato int entro a overflow con un n = " << contador << endl;
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
        //cout << contador << ": " << res_long << endl;
        if (res_long < 0){
            cout << "El tipo de dato long entro a overflow con un n = " << contador << endl;
            break;
        }
    }
}
