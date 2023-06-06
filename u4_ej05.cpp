#include<iostream>
using namespace std;

int main(){

    int num, grupoMenor, grupoMayorProm;
    int menor = 0, bandMenor = 0, bandProm = 0, contGrupo = 0;
    float mayorProm = 0;

    for (int i=0;i<10;i++){

        int contNum = 0;
        float promValores = 0, sumNum = 0;

        contGrupo++;

        cin >> num;

        while (num != 0){

            contNum++;
            sumNum += num;

            if (bandMenor == 0){
                menor = num;
                grupoMenor = contGrupo;
                bandMenor = 1;
            }
            else if (num < menor){
                menor = num;
                grupoMenor = contGrupo;
            }

            cin >> num;

        }

        promValores = sumNum / contNum;

        cout << endl << "El promedio de los valores del grupo es: " << promValores << endl;

        if (bandProm == 0){
            mayorProm = promValores;
            grupoMayorProm = contGrupo;
            bandProm = 1;
        }
        else if (promValores > mayorProm){
            mayorProm = promValores;
            grupoMayorProm = contGrupo;
        }

    }

    cout << endl << "El menor numero ingresado es el " << menor << " y se encuentra en el grupo " << grupoMenor << endl;
    cout << "El grupo con mayor promedio es el grupo " << grupoMayorProm << " con un promedio de " << mayorProm;


	return 0;
}
