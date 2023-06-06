#include<iostream>
using namespace std;

int main(){

    int cantidadImparesAnterior = 0, grupoOrdenado = 0, ultimoPrimo = 0;
    int grupoImpares, posicionPrimo, num;
    float cantidadImparesPos = 0;

    for(int i = 0; i < 10; i++){

        int primo = 0, bandAnterior = 0;
        int numAnterior = num;
        float posImpar = 0, contNum = 0;

        cin >> num;

        while(num != 0){

            contNum++;

            if((num > 0) && (num % 2 != 0)){
                posImpar++;
            }

            for(int x = num; x > 0; x--){

                if(num % x == 0){
                    primo++;
                }

            }

            if(primo == 1){
                ultimoPrimo = num;
                posicionPrimo = contNum;
            }

            if(num > numAnterior){
                numAnterior = num;
            }
            else{
                bandAnterior = 1;
            }

            cin >> num;

        }

        cantidadImparesPos = (posImpar / contNum) * 100;

        if(cantidadImparesPos > cantidadImparesAnterior){
            cantidadImparesAnterior = cantidadImparesPos;
            grupoImpares = i + 1;
        }

        if(bandAnterior == 0){
            grupoOrdenado++;
        }

        if(ultimoPrimo != 0){
            cout << "El ultimo primo del grupo es el " << ultimoPrimo << " y se encuentra en la posicion " << posicionPrimo << endl;
        }
        else{
            cout << "No hay numeros primos en este grupo" << endl;
        }

    }

    cout << "El grupo con mayor porcentaje de impares en relacion a su total es el grupo: " << grupoImpares << endl;
    cout << "La cantidad de grupos ordenados de mayor a menor es de " << grupoOrdenado << endl;

	return 0;
}
