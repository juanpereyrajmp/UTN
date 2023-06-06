#include<iostream>
using namespace std;

int main(){

    const int CANTIDAD_NUMEROS = 10;
    int numero[CANTIDAD_NUMEROS];
    int maximo, posicion;


    for (int i = 0; i < CANTIDAD_NUMEROS; i++){
        cout << "Numero: ";
        cin >> numero[i];
    }

    maximo = numero[0];

    for (int i = 1; i < CANTIDAD_NUMEROS; i++){
        if (numero[i] > maximo){
            maximo = numero[i];
            posicion = i + 1;
        }
    }

    cout << endl;
    cout << "El maximo es " << maximo << " y se encuentra en la posicion " << posicion << endl;

	return 0;
}
