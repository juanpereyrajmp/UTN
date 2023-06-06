#include<iostream>
using namespace std;

int main(){

    int contadorTotal = 0;

    for(int i=0;i<10;i++){

        bool boolPar = 0, boolImpar = 0;
        int num;
        int mayorPar = 0, mayorImpar = 0, positivo = 0, negativo = 0;
        float contadorNumeros = 0, porcentajeNegativos = 0, porcentajePositivos = 0;

        cout << "NUMERO: ";
        cin >> num;

        while(num != 0){

            contadorNumeros++;

            if(num % 2 == 0){

                if(boolPar == 0){
                    mayorPar = num;
                    boolPar = 1;
                }
                else if(num > mayorPar){
                    mayorPar = num;
                }

            }
            else if(boolImpar == 0){
                mayorImpar = num;
                boolImpar = 1;
            }
            else if(num > mayorImpar){
                mayorImpar = num;
            }

            if(num > 0){
                positivo++;
            }
            else{
                negativo++;
            }

            cout << endl << "NUMERO: ";
            cin >> num;

        }

        contadorTotal += contadorNumeros;

        porcentajeNegativos = (negativo / contadorNumeros) * 100;
        porcentajePositivos = (positivo / contadorNumeros) * 100;

        cout << endl << endl << "GRUPO CERRADO";
        cout << endl << endl << "El mayor numero PAR del grupo es " << mayorPar;
        cout << endl << "El mayor numero IMPAR del grupo es " << mayorImpar;
        cout << endl << endl << "PORCENTAJE POSITIVOS: " << porcentajePositivos << "%";
        cout << endl << "PORCENTAJE NEGATIVOS: " << porcentajeNegativos << "%" << endl << endl;

    }

    cout << endl << "ENTRE TODOS LOS SUBGRUPOS, EL TOTAL DE NUMEROS FUE DE: " << contadorTotal;

	return 0;
}
