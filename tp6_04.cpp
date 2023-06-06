#include<iostream>
using namespace std;

int main(){

    const int CANTIDAD_DIAS = 30;
    int dias[CANTIDAD_DIAS]{};
    int numeroVenta, numeroDia, diaMayorImporte;
    float importeVenta, mayorImporte=0;
    float importeTotalPorDia[CANTIDAD_DIAS]{};

    for (int i = 0; i < CANTIDAD_DIAS; i++){
        dias[i] = i + 1;
    }

    cout << "Numero de venta: ";
    cin >> numeroVenta;

    while (numeroVenta != 0){

        cout << "Numero de dia: ";
        cin >> numeroDia;
        cout << "Importe de venta: ";
        cin >> importeVenta;

        for (int i = 0; i < CANTIDAD_DIAS; i++){
            if (numeroDia == dias[i]){
                importeTotalPorDia[i] += importeVenta;
            }
        }

        cout << endl;
        cout << "Numero de venta: ";
        cin >> numeroVenta;

    }

    for (int i = 0; i < CANTIDAD_DIAS; i++){
        if(importeTotalPorDia[i] != 0){
            cout << endl << "El importe total del dia #" << dias[i] << " es de " << importeTotalPorDia[i];
        }
    }

    for (int i = 0; i < CANTIDAD_DIAS; i++){
        if (importeTotalPorDia[i] > mayorImporte){
            mayorImporte = importeTotalPorDia[i];
            diaMayorImporte = dias[i];
        }
    }

    cout << endl << endl << "El mayor importe es de $" << mayorImporte << " y se realizo el dia " << diaMayorImporte;

	return 0;
}
