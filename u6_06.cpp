#include<iostream>
using namespace std;

int main(){

    char cadena[50];

    char letra, caracter1, caracter2;
    int x = 0, j = 0;

    cin >> letra;

    while (letra != '.' && x < 50){
        cadena[x] = letra;
        x++;
        cin >> letra;
    }

    cout << "Caracter 1: ";
    cin >> caracter1;
    cout << "Caracter 2: ";
    cin >> caracter2;

    for (int i = 0; i < 50; i++){
        if(cadena[i] == caracter1){
            cadena[i] = caracter2;
        }
    }

    cout << endl;

    while (cadena[j] != '.' && j < 50){
        cout << cadena[j];
        j++;
    }

    cout << endl;

	return 0;
}
