//ESERCIZIO 2
//Un negozio offre una serie di sconti ai suoi clienti in base al totale di ogni spesa effettuata:
//- 10% di sconto se la spesa supera i 50 euro;
//- 20% se la spesa supera i 100 euro
//- 30% se la spesa supera i 150 euro.
//Realizza un algoritmo che, chiesto in input il totale della spesa effettuata, calcoli l'importo che il cliente deve pagare.
//importo sconto = spesa x sconto (0,10, 0,20 ....)

#include <iostream>
using namespace std;

int main() {
    //variabili
    float spesa, finalPrice, discountAmount;
    bool discountApplied = false;

    cout << "Inserisci l'importo totale"<< endl;
    cin>>spesa;

    if (spesa>150) {
        discountApplied=true;
        discountAmount=0.30;
        cout<<"Hai uno sconto del "<< discountAmount*100 <<"%."<<endl;
    } else if (spesa>100) {
        discountApplied=true;
        discountAmount=0.20;
        cout<<"Hai uno sconto del "<< discountAmount*100 <<"%."<<endl;  
    } else if (spesa>50) {
        discountApplied=true;
        discountAmount=0.10;
        cout<<"Hai uno sconto del "<< discountAmount*100 <<"%."<<endl;    
    } else {
        cout<<"Non hai alcun sconto."<<endl;
    }

    finalPrice=spesa-(spesa*discountAmount);
    cout<<"Il costo finale è di "<< finalPrice <<"€."<<endl;
    return 0;
}