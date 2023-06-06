#include<iostream>
using namespace std;

int main(){

    //Declaración de variables ----

    int cantTotal, cantConejos1, tipoConejo1, cantConejos2, tipoConejo2, cantConejos3, tipoConejo3;

    int blancos = 45;
    int negros = 50;
    int marrones = 40;
    int grises = 49;

    //Pedido de datos al usuario ----

    cout << "Ingresar la cantidad de conejos de la primera venta: " << endl;
    cin >> cantConejos1;

    cout << endl;

    cout << "Ingresar el tipo de conejo vendido (1-blancos, 2-negros, 3-marrones, 4-grises): " << endl;
    cin >> tipoConejo1;

    cout << endl << endl;

    cout << "Ingresar la cantidad de conejos de la segunda venta: " << endl;
    cin >> cantConejos2;

    cout << endl;

    cout << "Ingresar el tipo de conejo vendido (1-blancos, 2-negros, 3-marrones, 4-grises): " << endl;
    cin >> tipoConejo2;

    cout << endl << endl;

    cout << "Ingresar la cantidad de conejos de la tercera venta: " << endl;
    cin >> cantConejos3;

    cout << endl;

    cout << "Ingresar el tipo de conejo vendido (1-blancos, 2-negros, 3-marrones, 4-grises): " << endl;
    cin >> tipoConejo3;

    cout << endl << endl;

    //Suma de la cantidad total vendida ----

    cantTotal = cantConejos1 + cantConejos2 + cantConejos3;

    //Selección del tipo de conejo en las 3 ventas ---

    switch(tipoConejo1){
    case 1:
        blancos = blancos - cantConejos1;
    break;
    case 2:
        negros = negros - cantConejos1;
    break;
    case 3:
        marrones = marrones - cantConejos1;
    break;
    case 4:
        grises = grises - cantConejos1;
    }

    switch(tipoConejo2){
    case 1:
        blancos = blancos - cantConejos2;
    break;
    case 2:
        negros = negros - cantConejos2;
    break;
    case 3:
        marrones = marrones - cantConejos2;
    break;
    case 4:
        grises = grises - cantConejos2;
    }

    switch(tipoConejo3){
    case 1:
        blancos = blancos - cantConejos3;
    break;
    case 2:
        negros = negros - cantConejos3;
    break;
    case 3:
        marrones = marrones - cantConejos3;
    break;
    case 4:
        grises = grises - cantConejos3;
    }

    //Información arrojada sobre cantidad total y restante de conejos por color ----

    cout << "La cantidad total de conejos vendidos es de: " << cantTotal << endl << endl;
    cout << "Aun quedan " << blancos << " conejos Blancos" << endl;
    cout << "Aun quedan " << negros << " conejos Negros" << endl;
    cout << "Aun quedan " << marrones << " conejos Marrones" << endl;
    cout << "Aun quedan " << grises << " conejos Grises" << endl << endl;

    //Consulta si se vendieron de cada color ----

    if(blancos == 45){
        cout << "No se vendio ningun conejo blanco" << endl;
    }
    if(negros == 50){
        cout << "No se vendio ningun conejo negro" << endl;
    }
    if(marrones == 40){
        cout << "No se vendio ningun conejo marron" << endl;
    }
    if(grises == 49){
        cout << "No se vendio ningun conejo gris" << endl;
    }

	return 0;
}
