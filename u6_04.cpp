#include<iostream>
using namespace std;

int main(){

    const int CANTIDAD_NUMEROS = 10;
    int numero[CANTIDAD_NUMEROS];
    int anterior, desordenado = 0;

    for (int i = 0; i < CANTIDAD_NUMEROS; i++){
        cin >> numero[i];
    }

    anterior = numero[0];

    for (int i = 1; i < CANTIDAD_NUMEROS; i++){
        if (numero[i] > anterior){
            anterior = numero[i];
        }
        else {
            desordenado++;
        }
    }

    cout << endl;

    if (desordenado != 0){
        cout << "Vector desordenado" << endl;
    }
    else{
        cout << "Vector ordenado" << endl;
    }

	return 0;
}
