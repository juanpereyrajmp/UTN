#include<iostream>
using namespace std;

int main(){

    int num, numPrimo;
    int desordenados = 0, preNumPrimo = 0;

    cin >> num;

    while (num != 0){

        int primo = 0;

        for (int i = num; i > 0; i--){

            if (num % i == 0){
                primo++;
            }

        }

        if (primo == 2){

            numPrimo = num;

            if (numPrimo > preNumPrimo){
                preNumPrimo = numPrimo;
            }
            else{
                desordenados++;
            }

        }

        cin >> num;
    }

    if (desordenados != 0){
        cout << "Desordendos";
    }
    else{
        cout << "Ordenados";
    }

	return 0;
}
