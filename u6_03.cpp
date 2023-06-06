#include<iostream>
using namespace std;

int main(){

    const int CANTIDAD_NUMEROS = 10;
    int numeros[CANTIDAD_NUMEROS];
    float promedioNumeros, sumaNumeros = 0;


    for (int i = 0; i < CANTIDAD_NUMEROS; i++){
        cout << "Numero: ";
        cin >> numeros[i];

        sumaNumeros += numeros[i];
    }

    promedioNumeros = sumaNumeros / CANTIDAD_NUMEROS;

    cout << endl << endl;

    cout << "Promedio : " << promedioNumeros;

    cout << endl << endl;

    cout << "MAYORES AL PROMEDIO:" << endl;

    for (int i = 0; i < CANTIDAD_NUMEROS; i++){
        if (numeros[i] > promedioNumeros){
            cout << numeros[i] << endl;
        }
    }

	return 0;
}
