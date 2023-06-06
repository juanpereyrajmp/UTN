#include<iostream>
using namespace std;

int main(){

        int ed1, ed2, ed3, ed4, ed5;
        float alt1, alt2, alt3, alt4, alt5;

        float cantAltos = 0, promAltura = 0, cantAltura = 0, cantBajos = 0, cantRedondos = 0;

        // Datos para ingresar.

        cout << "Ingresar la edad de la primera persona, seguido de su altura: " << endl;
        cin >> ed1 >> alt1;
        cout << endl;

        cout << "Ingresar la edad de la segunda persona, seguido de su altura: " << endl;
        cin >> ed2 >> alt2;
        cout << endl;

        cout << "Ingresar la edad de la tercera persona, seguido de su altura: " << endl;
        cin >> ed3 >> alt3;
        cout << endl;

        cout << "Ingresar la edad de la cuarta persona, seguido de su altura: " << endl;
        cin >> ed4 >> alt4;
        cout << endl;

        cout << "Ingresar la edad de la quinta persona, seguido de su altura: " << endl;
        cin >> ed5 >> alt5;
        cout << endl << endl;

        // Contador de personas mayores a 30 que miden más de 1.8 m.

        if(ed1 >= 30 && alt1 > 1.8){
            cantAltos++;
            promAltura = promAltura + alt1;
            cantAltura++;
        }
        if(ed2 >= 30 && alt2 > 1.8){
            cantAltos++;
            promAltura = promAltura + alt2;
            cantAltura++;
        }
        if(ed3 >= 30 && alt3 > 1.8){
            cantAltos++;
            promAltura = promAltura + alt3;
            cantAltura++;
        }
        if(ed4 >= 30 && alt4 > 1.8){
            cantAltos++;
            promAltura = promAltura + alt4;
            cantAltura++;
        }
        if(ed5 >= 30 && alt5 > 1.8){
            cantAltos++;
            promAltura = promAltura + alt5;
            cantAltura++;
        }

        // Calculo del promedio de altura de esas personas.

        promAltura = promAltura / cantAltura;

        // Contador de cantidad de personas de entre 1.7 m y 1.8 m.

        if(alt1 >= 1.7 && alt1 <= 1.8){
            cantBajos++;
        }
        if(alt2 >= 1.7 && alt2 <= 1.8){
            cantBajos++;
        }
        if(alt3 >= 1.7 && alt3 <= 1.8){
            cantBajos++;
        }
        if(alt4 >= 1.7 && alt4 <= 1.8){
            cantBajos++;
        }
        if(alt5 >= 1.7 && alt5 <= 1.8){
            cantBajos++;
        }

        // Contador de personas con 20, 30 o 40 años.

        if(ed1 == 20 || ed1 == 30 || ed1 == 40){
            cantRedondos++;
        }
        if(ed2 == 20 || ed2 == 30 || ed2 == 40){
            cantRedondos++;
        }
        if(ed3 == 20 || ed3 == 30 || ed3 == 40){
            cantRedondos++;
        }
        if(ed4 == 20 || ed4 == 30 || ed4 == 40){
            cantRedondos++;
        }
        if(ed5 == 20 || ed5 == 30 || ed5 == 40){
            cantRedondos++;
        }

        // Respuestas del programa.

        cout << "La cantidad de personas mayores a 30 anos de mas de 1.8 es de: " << cantAltos << endl << endl;
        cout << "Entre ellos el promedio de altura es de: " << promAltura << endl << endl;
        cout << "La cantidad de personas entre 1.70 y 1.80 de altura es de: " << cantBajos << endl << endl;
        cout << "La cantidad de gente que tiene 20, 30 o 40 anos es de: " << cantRedondos << endl << endl;

	return 0;
}
