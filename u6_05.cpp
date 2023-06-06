#include<iostream>
using namespace std;

int main(){

    const int CANTIDAD_NUMEROS = 10;
    int numero[CANTIDAD_NUMEROS], posicion[CANTIDAD_NUMEROS]{};
    int auxiliar;

    for (int i = 0; i < CANTIDAD_NUMEROS; i++){
        cout << "Numero: ";
        cin >> numero[i];
        posicion[i] = i+1;
    }

    for (int i = 0; i < CANTIDAD_NUMEROS; i++){
        for (int i = 0; i < CANTIDAD_NUMEROS - 1; i++){
            if (numero[i] < numero[i+1]){
                auxiliar = numero[i+1];
                numero[i+1] = numero[i];
                numero[i] = auxiliar;
                auxiliar = posicion[i+1];
                posicion[i+1] = posicion[i];
                posicion[i] = auxiliar;
            }
        }
    }

    cout << endl;
    cout << "CONJUNTO ORDENADO" << endl;

    for (int i = 0; i < CANTIDAD_NUMEROS; i++){
        cout << numero[i] << " ----- Posicion Inicial ---> " << posicion[i] << endl;
    }

	return 0;
}
