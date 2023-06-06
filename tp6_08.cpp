#include<iostream>
using namespace std;

int main(){

    const int CANTIDAD_CLIENTES = 50;

    int numeroDeEntrenamiento, tipoEntrenamiento, tiempoEntrenamiento;
    int cliente[CANTIDAD_CLIENTES]{}, tiempoTotalPorCliente[CANTIDAD_CLIENTES]{};

    for (int i = 0; i < CANTIDAD_CLIENTES; i++){
        cliente[i] += 101;
    }

    cout << "Numero de entrenamiento: ";
    cin >> numeroDeEntrenamiento;

    while (numeroDeEntrenamiento != 0){

        cout << "Cliente: ";
        cin >> cliente[];
        cout << "Tipo de entrenamiento: ";
        cin >> tipoEntrenamiento;
        cout << "Tiempo de entrenamiento: ";
        cin >> tiempoEntrenamiento;

        for (int i = 0; i < CANTIDAD_CLIENTES; i++){
            tiempoTotalPorCliente
        }

        cout << "Numero de entrenamiento: ";
        cin >> numeroDeEntrenamiento;

    }

	return 0;
}
