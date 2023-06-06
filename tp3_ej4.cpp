#include<iostream>
using namespace std;

int main(){

    int number1, number2;

    cout << "Ingresar dos numeros: " << endl;
    cin >> number1 >> number2;

    if(number1 > number2){
        for(int i = number2; i <= number1; i++)
            cout << i << endl;
    }
    else{
        for(int i = number1; i <= number2; i++)
            cout << i << endl;
    }

	return 0;
}
