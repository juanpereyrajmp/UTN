#include<iostream>
using namespace std;

int main(){

    int costoAlquiler = 10000;
    float costoCaramelo = 0.5;
    float mantenimiento;

    float presupuestoInicial;
    int cantidadCaramelos;
    float cantidadTotal;

    cout << "Ingresar el presupuesto Inicial: ";
    cin >> presupuestoInicial;

    cout << endl;

    cout << "Ingresar la cantidad de caramelos a producir: ";
    cin >> cantidadCaramelos;

    cout << endl << endl;

    mantenimiento = cantidadCaramelos / 1000;
    mantenimiento = mantenimiento * 5000;

    cantidadTotal = costoAlquiler + mantenimiento + (cantidadCaramelos * costoCaramelo);

    if(cantidadTotal < presupuestoInicial){
        cout << "El presupuesto es suficiente para cubrir los costos de: " << cantidadTotal << " y sobran " << presupuestoInicial - cantidadTotal << endl;
    }
    else{
        cout << "El presupuesto no es suficiente. Necesita un credito de: " << cantidadTotal - presupuestoInicial << endl;
    }

	return 0;
}
