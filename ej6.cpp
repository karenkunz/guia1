/*Dadas dos fechas informar cual es la más reciente. Determine cuáles serían
los datos de entrada y las leyendas
a informar de acuerdo al proceso solicitado.*/

#include <iostream>
using namespace std;

int main () {
    
    int fecha1;
    int fecha2;
    int masReciente;

    cout << "ingrese una fecha: " << endl;
    cin >> fecha1;
    cout << "ingrese otra fecha: " << endl;
    cin >> fecha2;

    if (fecha1 > fecha2){
        masReciente = fecha1;
    }
    else {
        masReciente = fecha2;
    }

    cout << "la fecha mas reciente es: " << masReciente << endl;
    

    system("pause");
     return 0;
}