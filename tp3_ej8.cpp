#include<iostream>
using namespace std;

int main(){

    int sueldo, legajo, mayor=0, legMayor=0;

    for(int x=0;x<10;x++){
        cout << "Ingresar legajo empleado: " << endl;
        cin >> legajo;

        cout << "Ingresar sueldo empleado: " << endl;
        cin >> sueldo;

        if(mayor==0){
            mayor=sueldo;
            legMayor=legajo;
        }
        else if(sueldo>mayor){
            mayor=sueldo;
            legMayor=legajo;
        }
    }

    cout << "El empleado con mayor sueldo es: Legajo " << legMayor << " y su sueldo es de: " << mayor;

	return 0;
}
