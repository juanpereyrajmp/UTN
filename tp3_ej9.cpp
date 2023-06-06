#include<iostream>
using namespace std;

int main(){

    int matchNumber, playedMinutes, yellowCards, redCards, goals, maxMatch;
    int notPlayed = 0, played = 0, sumCards = 0, maxGoals = 0, sumYellowCards = 0, sumRedCards = 0, record = 0, streak = 0;
    float promYellowCards, promRedCards;

    for(int x=0; x<19; x++){
        cout << "Numero de partido: ";
        cin >> matchNumber;
        cout << "Minutos jugados: ";
        cin >> playedMinutes;
        cout << "Tarjetas amarillas: ";
        cin >> yellowCards;
        cout << "Tarjetas rojas: ";
        cin >> redCards;
        cout << "Goles: ";
        cin >> goals;
        cout << endl;

        //Partidos no jugados

        if(playedMinutes == 0){
            notPlayed++;
        }

        // Partidos jugados por completo

        else if(playedMinutes >= 90){
            played++;
        }

        //Suma de tarjetas

        sumYellowCards += yellowCards;
        sumRedCards += redCards;

        //Partido con mayor cantidad de goles

        if(maxGoals == 0){
            maxGoals = goals;
            maxMatch = matchNumber;
        }
        else if(goals>maxGoals){
            maxGoals = goals;
            maxMatch = matchNumber;
        }

        //Racha de partidos con conversion

        if(goals != 0){
            if(streak == matchNumber - 1){
                streak = matchNumber;
                record++;
            }
            else{
                streak = matchNumber;
            }
        }
        else{
            streak = matchNumber;
        }
    }

    //Promedio de tarjetas por partido

    promYellowCards = sumYellowCards / 19;
    promRedCards = sumRedCards / 19;

    cout << "No jugo " << notPlayed << " partidos" << endl;
    cout << "Por completo, jugo " << played << " partidos" << endl;
    cout << "El promedio de tarjetas amarillas fue de " << promYellowCards << endl;
    cout << "El promedio de tarjetas rojas fue de " << promRedCards << endl;
    cout << "El partido en el que mayor numero de goles hizo fue en el partido " << maxMatch << " con un total de " << maxGoals << " goles" << endl;
    cout << "La mayor racha de partidos con conversiones fue de " << record << " partidos consecutivos.";

	return 0;
}
