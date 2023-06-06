#include<iostream>
using namespace std;

int main(){

    int num[15]{};
    int num2;
    bool pertenece = false;

    for(int i=0;i<15;i++){
        cout << "Ingresar el numero " << num[i] + 1 << " de la lista : ";
        cin >> num[i];
    }

    cout << endl << "Numero?" << endl;
    cin >> num2;

    for(int i=0;i<15;i++){
        if(num2 == num[i]){
            pertenece = true;
        }
    }

    if(pertenece == true){
        cout << "El numero " << num2 << " pertenece a la lista.";
    }
    else{
        cout << "El numero " << num2 << " no pertenece a la lista.";
    }

	return 0;
}
