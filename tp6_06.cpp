#include<iostream>
using namespace std;

int main(){

    const int CANTIDAD_VALORES = 10;
    int vectorDiez[CANTIDAD_VALORES];
    int mayorNumero = 0;


    for (int i = 0; i < CANTIDAD_VALORES; i++){
        cout << "Numero: ";
        cin >> vectorDiez[i];
    }

    for (int i = 0; i < CANTIDAD_VALORES; i++){
        if (mayorNumero == 0){
            mayorNumero = vectorDiez[i];
        }
        else if (vectorDiez[i] > mayorNumero){
            mayorNumero = vectorDiez[i];
        }
    }

    for (int i = 0; i < CANTIDAD_VALORES; i++){
        if (vectorDiez[i] != mayorNumero){
            cout << endl << vectorDiez[i];
        }
    }

	return 0;
}
