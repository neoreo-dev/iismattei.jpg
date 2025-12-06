//ESERCIZIO 4
//Crea un programma che permetta all'utente di inserire numeri interi e ne calcoli la somma totale. 
//Il programma deve continuare a chiedere numeri finché l'utente non inserisce un numero negativo (che funge da segnale di stop, ma non deve essere sommato).  

#include <iostream>
using namespace std;

int main() {
    //variabili
    int input, somma;

    cout<<"Inserisci un numero"<<endl;
    cin>>input;

    while (input>=0) {
        somma=somma+input;
        cout<<"Inserisci un altro numero"<<endl;
        cin>>input;
    }

    cout<<"Numero negativo rilevato, termino il programma. La somma totale è: "<<somma<<"."<<endl;
    
    return 0;
}