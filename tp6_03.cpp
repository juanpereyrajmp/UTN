#include<iostream>
using namespace std;

int main(){

    int numero[15]{};
    int anterior, minimo;
    int cantMinimo=0;
    bool primerRegistro = false;

    for(int i=0;i<15;i++){

        cin >> numero[i];

        if(primerRegistro == false){
            minimo = numero[i];
            primerRegistro = true;
        }
        else if(numero[i]<anterior){
            minimo = numero[i];
        }

        anterior = numero[i];
    }

    for(int i=0;i<15;i++){
        if(numero[i]==minimo)
            cantMinimo++;
    }

    cout << endl << "El minimo valor es " << minimo << " y se repite " << cantMinimo << " veces";

	return 0;
}
