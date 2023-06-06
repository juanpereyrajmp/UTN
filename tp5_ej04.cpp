#include<iostream>
using namespace std;

int main(){

    int A, B, C, encomienda;
    int numeroCamion = 0;
    float valorTotal = 0;

    cout << "Ingresar el valor de las encomiendas menores o iguales a 10kg : ";
    cin >> A;
    cout << endl << "Ingresar el valor de las encomiendas mayores a 10kg y menores a 40kg : ";
    cin >> B;
    cout << endl << "Ingresar el valor de las encomiendas mayores a 40kg : ";
    cin >> C;

    cout << endl << endl;

    cout << "Ingresar el peso de la encomienda: ";
    cin >> encomienda;

    while(encomienda > 0){

        int cargaCamion = 0;
        float valorCamion = 0;
        numeroCamion++;

        while(encomienda + cargaCamion <= 200 && encomienda > 0){

            cargaCamion += encomienda;

            if(encomienda <= 10){
                valorCamion += A;
            }
            else if(encomienda > 40){
                valorCamion += C;
            }
            else{
                valorCamion += B;
            }

            cout << endl << "Ingresar el peso de la encomienda: ";
            cin >> encomienda;

        }

        valorTotal += valorCamion;

        cout << endl << "CAMION " << numeroCamion;
        cout << endl << "Carga total : " << cargaCamion << "kg";
        cout << endl << "El valor total de encomiendas en el camion " << numeroCamion << " es de " << valorCamion;

    }

    cout << endl << endl << "TOTAL CAMIONES : " << numeroCamion;
    cout << endl << "Valor total : " << valorTotal;

	return 0;
}
