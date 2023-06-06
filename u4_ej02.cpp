#include<iostream>
using namespace std;

int main(){

    int n, totalPos = 0;

    for(int i = 0; i < 10; i++){

        int maxPar = 0, maxImpar = 0, bandPar = 0, bandImpar = 0;
        float porNeg, porPos, pos = 0, neg = 0, cont = 0;

        cout << "Ingresar un grupo de numeros. Para finalizar el grupo, marcar 0:" << endl;
        cin >> n;

        while(n != 0){

            cont++;

            if(n % 2 == 0){

                if(n > maxPar){

                    if(bandPar == 0){
                        maxPar = n;
                        bandPar = 1;
                    }
                    else{
                        maxPar = n;
                    }

                }

            }

            else if(n > maxImpar){

                if(bandImpar == 0){
                    maxImpar = n;
                    bandImpar = 1;
                }
                else{
                    maxImpar = n;
                }

            }

            if(n > 0){
                pos++;
            }
            else{
                neg++;
            }

            cin >> n;

        }

        cout << endl;

        totalPos += pos;
        porNeg = (neg / cont) * 100;
        porPos = (pos / cont) * 100;

        cout << "El maximo de los pares del grupo es " << maxPar << " y el maximo de los impares es " << maxImpar << endl << endl;
        cout << "El porcentaje de los negativos del grupo es " << porNeg << "% y el porcentaje de los positivos es " << porPos << "%" << endl << endl;

    }

    cout << "Entre todos los grupos, el total de los positivos es: " << totalPos;

	return 0;
}
