/*Ej. MI-2: Dada una terna de números naturales que representan al día, al mes y al año de una determinada
fecha informarla como un solo número natural de 8 dígitos con la forma (AAAAMMDD).*/

#include <iostream>
using namespace std;

int main () {
    
    int dia;
    int mes;
    int anio;
    int fecha;
    string cero = 0 ;

    cout << "Ingrese el dia con 2 digitos: " << endl;
    cin >> dia;
    cout << "Ingrese el mes con 2 digitos: " << endl;
    cin >> mes;
    cout << "Ingrese el anio con 4 digitos: " << endl;
    cin >> anio;

    if (dia < 10) {
        cout << "La fecha es: " << anio << cero << mes << cero << dia ; 
    }

    //cout << "La fecha es: "<< anio << mes << dia << endl;

    system("pause");
     return 0;
}
