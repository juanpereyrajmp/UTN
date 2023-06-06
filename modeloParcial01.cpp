#include<iostream>
using namespace std;


bool esMessistica(int matriz[10][10]){

    int filaConDiez = 0, cantidadDeFilasConDiez = 0;

    for (int i = 0; i < 11; i++){

        if (filaConDiez != 0){
            cantidadDeFilasConDiez++;
        }

        filaConDiez = 0;

        for (int j = 0; j < 10; j++){

            if (matriz[i][j] == 10){

                filaConDiez++;

            }

        }

    }

    int sumaFila = 0, filaMessistica = 0;

    for (int i = 0; i < 11; i++){

        if (sumaFila == 10){

            filaMessistica++;

        }

        sumaFila = 0;

        for (int j = 0; j < 10; j++){

           sumaFila += matriz[i][j];

        }

    }

    if (filaMessistica != 0 && cantidadDeFilasConDiez == 10){
        return true;
    }
    else{
        return false;
    }

}

int main() {

    int matriz[10][10] = {

        {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
        {10, 9, 8, 7, 6, 5, 4, 3, 2, 1},
        {2, 3, 4, 5, 6, 7, 8, 9, 10, 1},
        {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
        {10, 9, 8, 7, 6, 5, 4, 3, 2, 1},
        {2, 3, 4, 5, 6, 7, 8, 9, 10, 1},
        {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
        {10, 9, 8, 7, 6, 5, 4, 3, 2, 1},
        {2, 3, 4, 5, 6, 7, 8, 9, 10, 1},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 10}

    };

    if (esMessistica(matriz)) {
        cout << "La matriz es Messistica." << endl;
    } else {
        cout << "La matriz no es Messistica." << endl;
    }

    return 0;
}



