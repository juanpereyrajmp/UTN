#include<iostream>
using namespace std;

int main(){

    const int CANTIDAD_NUMEROS = 10;
    int pos[CANTIDAD_NUMEROS]{}, nega[CANTIDAD_NUMEROS]{};
    int numero, cantidadPositivos=0, cantidadNegativos=0;

    for (int i = 0; i < CANTIDAD_NUMEROS; i++){
        cout << "Numero: ";
        cin >> numero;

        if (numero > 0){
            pos[i] = numero;
        }
        else if (numero < 0){
            nega[i] = numero;
        }
    }

    for (int i = 0; i < CANTIDAD_NUMEROS; i++){
        if (pos[i] != 0){
            cantidadPositivos++;
        }
        if (nega[i] != 0){
            cantidadNegativos++;
        }
    }

    cout << "--------------------";
    cout << cantidadPositivos << " POSITIVOS";
    cout << "--------------------";

    for (int i = 0; i < CANTIDAD_NUMEROS; i++){
        if (pos[i] != 0){
            cout << endl << pos[i];
        }
    }

    cout << endl;
    cout << "--------------------";
    cout << cantidadNegativos << " NEGATIVOS";
    cout << "--------------------";

    for (int i = 0; i < CANTIDAD_NUMEROS; i++){
        if (nega[i] != 0){
            cout << endl << nega[i];
        }
    }

	return 0;
}
