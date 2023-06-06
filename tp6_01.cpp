#include<iostream>
using namespace std;

int main(){

    int positivo = 0;
    int num[10]{};

    for(int i=0; i<10; i++){
        cout << "Ingresar un numero entero: ";
        cin >> num[i];

        if(num[i]>0){
            positivo++;
        }
    }

    cout << endl << "Se ingresaron " << positivo << " numeros positivos";

	return 0;
}
