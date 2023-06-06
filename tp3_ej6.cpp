#include<iostream>
using namespace std;

int main(){

    int sueldo, maximo, minimo, promedioFinal, promedio=0, cantMayores=0;

    cout << "Ingresar los suelos de los 10 empleados: " << endl;

    for(int i=0; i<10; i++){
        cin >> sueldo;
        if(i==0){
            maximo=sueldo;
            minimo=sueldo;
        }
        if(sueldo > 50000){
            cantMayores++;
        }
        promedio += sueldo;

        if(maximo<sueldo){
            maximo=sueldo;
        }
        if(minimo>sueldo){
            minimo=sueldo;
        }
    }

    promedioFinal = promedio / 10;

    cout << "El sueldo maximo es de : $" << maximo << endl;
    cout << "El sueldo minimo es de : $" << minimo << endl;
    cout << "El sueldo promedio es de : $" << promedioFinal << endl;
    cout << "La cantidad de sueldos mayores a $50000 es de: " << cantMayores;

	return 0;
}
