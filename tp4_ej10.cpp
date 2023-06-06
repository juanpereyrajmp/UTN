#include<iostream>
using namespace std;

int main(){

    int artistNumber, members, day;
    float showDuration, sumDuration, totalArtists;
    int day1 = 0, day2 = 0, day3 = 0, largestShow = 0, boolLarge = 0, largestArtist = 0;
    int solo1 = 0, solo2 = 0, solo3 = 0, duration1 = 0, duration2 = 0, duration3 = 0;
    float promDuration = 0;

    cout << "Numero de artista: ";
    cin >> artistNumber;

    while (artistNumber != 0){

        cout << endl << "Cantidad de integrantes: ";
        cin >> members;
        cout << endl << "Jornada: ";
        cin >> day;
        cout << endl << "Duracion del show (en minutos): ";
        cin >> showDuration;
        cout << endl;

        totalArtists++;

        switch (day){

            case 1:

                if (boolLarge == 0){
                    largestShow = showDuration;
                    largestArtist = artistNumber;
                    boolLarge = 1;
                }
                else if (showDuration > largestShow){
                    largestShow = showDuration;
                    largestArtist = artistNumber;
                }

                if (members == 1){
                    solo1++;
                }

                duration1 += showDuration;

            break;
            case 2:

                if (members == 1){
                    solo2++;
                }

                duration2 += showDuration;

            break;
            case 3:

                if (members == 1){
                    solo3++;
                }

                duration3 += showDuration;

            break;
            default:
                cout << "Jornada incorrecta";
            break;

        }

        sumDuration += showDuration;

        cout << "Numero de artista: ";
        cin >> artistNumber;

    }

    cout << "El artista de la jornada 1 que realiza el show mas largo es el artista: " << largestArtist << " con una duracion de " << largestShow << " minutos";
    cout << endl << "La cantidad de solistas en la jornada 1 es de: " << solo1;
    cout << endl << "La cantidad de solistas en la jornada 2 es de: " << solo2;
    cout << endl << "La cantidad de solistas en la jornada 3 es de: " << solo3;

    if ((duration1 > duration2) && duration1 > duration3){

        cout << endl << "La jornada mas larga fue la jornada 1";

    }
    else if((duration2 > duration1) && (duration2 > duration3)){

        cout << endl << "La jornada mas larga fue la jornada 2";

    }
    else{

        cout << endl << "La jornada mas larga fue la jornada 3";

    }

    promDuration = sumDuration / totalArtists;

    cout << endl << "La duracion promedio total por artista es de: " << promDuration << " minutos.";

	return 0;
}
