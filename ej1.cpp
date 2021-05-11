/*Ej. MI-1 Dados dos valores enteros A y B, informar la suma, la resta y el producto.*/

#include <iostream>
using namespace std;

int main () {
    int val1;
    int val2;
    int suma;
    int resta;
    int producto;

  cout << "Ingrese el primer valor: "<< endl;
  cin >> val1;
  cout << "Ingrese el segundo valor: " << endl;
  cin >> val2;

    resta= val1 - val2;
    suma= val2 + val1;
    producto = val1 * val2;

    cout << "La suma es: " << suma << endl;
    cout << "La resta es: " << resta << endl;
    cout << "El producto es: " << producto << endl;


    system("pause");
     return 0;
}