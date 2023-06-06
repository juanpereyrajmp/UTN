#include<iostream>
using namespace std;

int main(){

    int n, num, pos=0;

    cout << "Ingresar la cantidad de numeros en la lista: ";
    cin >> n;
    cout << endl << "Ingresar los " << n << " numeros: " << endl;

    for(int i=0; i<n; i++){

        cin >> num;
        if(num>0){
            pos++;
        }
    }

    cout << endl << pos << " son positivos";

	return 0;
}
