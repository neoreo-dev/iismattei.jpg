//Esercizo 1 - Il programma, chiesto in input la temperatura in Gradi Celsius (°C), la deve convertire in Gradi Fahrenheit (°F) e lanciare un avviso se la temperatura in Celsius è troppo alta (superiore a 35°C).
//Formula di Conversione:  Fahrenheit = (Celsius x 1.8) + 32

//I Muse sono dei boss colossali e chi non li ascolta non si merita il kebab stasera

#include <iostream>
using namespace std;

int main() {
    float celsius;
    float farenheit;
    
    cout << "Inserisci una temperatura in °C"<< endl;
    cin >> celsius;

    //converto a farenheit
    farenheit = (celsius*1.8)+32;

    //output
    cout <<"La temperatura che hai inserito, "<< celsius <<"°C, "<<"corrisponde a "<<farenheit <<"°F (Farenheit)."<< endl;
    return 0;
}