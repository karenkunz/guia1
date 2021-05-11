/*Dados dos valores enteros y distintos, emitir una leyenda apropiada
 que informe cuál es el mayor entre ellos.*/


 #include <iostream>
 using namespace std;
 
 int main () {
     int valor1;
     int valor2;
     int valorMayor=0;

     cout << "ingrese un valor: " << endl;
     cin >> valor1;
     cout << "ingrese otro valor: " << endl;
     cin >> valor2;

     if (valor1 != valor2) {
            if (valor1 > valor2) {
                valorMayor = valor1;
            }
            else {
                valorMayor = valor2;
            }
         cout << "El valor mayor es: " << valorMayor << endl;   
        }

      else{
         cout << "los valores ingresados tienen que ser distintos" << endl;
        }

        
     system("pause");
      return 0;
 }