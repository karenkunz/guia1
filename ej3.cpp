

#include <iostream>
using namespace std;

int main () {
    int numero;
    int dia;
    int mes;
    int anio;
    int restoAnio;

    cout << "Ingrese una fecha en formato AAAAMMDD: " << endl;
    cin >> numero;

    restoAnio = numero % 10000;
	
	anio = (numero - restoAnio) / 10000;
	dia = numero % 100;
	mes = (restoAnio - dia) / 100;

    cout << "El dia es: " << dia << endl;
    cout << "El mes: " << mes << endl;
    cout << "El anio: " << anio << endl;

    



    system("pause");
     return 0;
}