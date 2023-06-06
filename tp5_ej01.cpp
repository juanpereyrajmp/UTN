#include<iostream>
using namespace std;

int main(){

    int categoria, antiguedad, sueldo, maxCategoria;
    int empleados1 = 0, empleados2 = 0, empleados3 = 0, sueldoMax = 0;
    float promSueldo, totalSueldo1 = 0, totalSueldo2 = 0, totalSueldo3 = 0;

    cout << endl << "Categoria: ";
    cin >> categoria;
    cout << endl << "Antiguedad: ";
    cin >> antiguedad;

    for(int i=0; i<50; i++){

        switch(categoria){

        case 1:
            sueldo = 38000 + (antiguedad * 1200);
            empleados1++;
            totalSueldo1 += sueldo;
        break;
        case 2:
            sueldo = 70000 + (antiguedad * 1200);
            empleados2++;
            totalSueldo2 += sueldo;
        break;
        case 3:
            sueldo = 105000 + (antiguedad * 1200);
            empleados3++;
            totalSueldo3 += sueldo;
        break;

        }

        if(sueldoMax == 0){
            sueldoMax = sueldo;
            maxCategoria = categoria;
        }
        else if (sueldo > sueldoMax){
            sueldoMax = sueldo;
            maxCategoria = categoria;
        }

        cout << endl << "Categoria: ";
        cin >> categoria;
        cout << endl << "Antiguedad: ";
        cin >> antiguedad;

    }

    promSueldo = (totalSueldo1 + totalSueldo2 + totalSueldo3) / 50;

    cout << endl << "Cantidad de empleados por categoria: " << endl << endl;
    cout << "Categoria 1: " << empleados1 << endl;
    cout << "Categoria 2: " << empleados2 << endl;
    cout << "Categoria 3: " << empleados3 << endl;

    cout << endl << "Cantidad total de sueldos por categoria: " << endl << endl;
    cout << "Categoria 1: " << totalSueldo1 << endl;
    cout << "Categoria 2: " << totalSueldo2 << endl;
    cout << "Categoria 3: " << totalSueldo3 << endl;

    cout << endl << "El promedio de los sueldos es de: " << promSueldo;

    cout << endl << "El mayor sueldo es de " << sueldoMax << " y pertenece a la categoria " << maxCategoria;

	return 0;
}
