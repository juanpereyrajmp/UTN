#include<iostream>
using namespace std;

int main(){

    const int CANTIDAD_VALORES = 10;
    int numeros[CANTIDAD_VALORES];
    int numeroIngresado;

    for (int i = 0; i < CANTIDAD_VALORES - 1; i++){
        cout << "Numero: ";
        cin >> numeros[i];
    }

    cout << endl;

    cout << "Ingresar un numero para acomodar: ";
    cin >> numeros[CANTIDAD_VALORES - 1];

    numeroIngresado = numeros[CANTIDAD_VALORES - 1];

    for (int i = 0; i < CANTIDAD_VALORES; i++){
        if (numeroIngresado > numeros[i]){
            cout << endl << numeros[i];
        }
        else {
            numeros[i] = numeroIngresado;
        }

    }

	return 0;
}
