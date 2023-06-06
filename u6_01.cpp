#include<iostream>
using namespace std;

int main(){

    const int NUMEROS = 10;
    int numero[NUMEROS];
    int sumaDeValores = 0;

    for (int i = 0; i < NUMEROS; i++){

        cout << "Numero # " << i + 1 << " : ";
        cin >> numero[i];

        sumaDeValores += numero[i];
    }

    cout << endl;
    cout << "La suma de los numeros ingresados es: " << sumaDeValores;

	return 0;
}
