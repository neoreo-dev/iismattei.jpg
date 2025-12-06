//ESERCIZIO 5
//Crea un programma che permetta al docente di inserire una sequenza di voti interi (da 1 a 10) ottenuti dagli studenti. Il programma dovrà calcolare e mostrare:
//- Il voto più alto inserito;
//- La media di tutti i voti inseriti;
//- Il numero totale di voti insufficienti (voto <=5).
//L'inserimento dei voti deve continuare finché l'utente non inserisce il valore speciale 0 (che funge da segnale di stop e non deve essere conteggiato nei calcoli). (che funge da segnale di stop, ma non deve essere sommato).  

#include <iostream>
using namespace std;

int main() {
    // Variabili inizializzate a 0 per sicurezza
    int somma = 0, voto, counterInsuff = 0, maggiore = 0, counter = 0;
    float media = 0.0;

    cout << "Inserisci un voto (da 1 a 10, 0 per terminare): " << endl;
    cin >> voto;
    
    while (voto != 0) {
        somma=somma+voto;
            counter++;
            
            if (voto > maggiore) {
                maggiore = voto;
            }
            
            if (voto <= 5) {
                counterInsuff++;
            }
            
            cout << "Inserisci un altro voto (0 per terminare): " << endl;
            cin >> voto;
    }
    
    if (counter > 0) {
        media = (float)somma / counter;
    }
    cout << "Inserimento terminato. Il voto più alto inserito è " << maggiore << ", la media totale è di " << media << ", il numero totale di insufficienze è di " << counterInsuff << "." << endl;

    return 0;
}
