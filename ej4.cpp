/*Ej. MI-4: A partir de un valor entero ingresado por teclado, se pide informar:
a) La quinta parte de dicho valor
b) El resto de la división por 5
c) La séptima parte del resultado del punto a)

Recuerde analizar caso supone decidir entre dos o más alternativas. Los casos deben definirse sin
ambigüedades y deben ser mutuamente excluyentes. Pueden ser:
1. Simples: evalúan expresiones lógicas
a. Completos
b. Incompletos
2. Múltiples: evalúan ordinales
a. Completos
b. incompletos*/


#include <iostream>
using namespace std;

int main () {
    
    int valorN;
    float quintaParte;
    float restoDiv;
    float septimaParte;


    cout << "Ingrese un valor: " << endl;
    cin >> valorN;


    quintaParte = valorN / 5;
    restoDiv = valorN % 5;
    septimaParte = quintaParte / 7;


    cout << "La quinta parte es: " << quintaParte << endl;
    cout << "El resto de la division es: " << restoDiv <<  endl;
    cout << "La septima parte del resultado de la quinta parte es: " << septimaParte << endl;



    system("pause");
     return 0;
}