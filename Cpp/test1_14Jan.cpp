/*
 * Realizzare un programma che, inseriti "n" valori in un array, calcoli: la somma degli elementi e la media.
 */

#include <iostream>
using namespace std;

int main() {
    //dichiarazione ed inizializzazione array e variabili
    int n;
    float somma, media;
    n=0;
    somma=0;
    media=0;

    cout<<"Quanti elementi vuoi inserire nell'array?"<<endl;
    cin>>n;
    float numeri[n];

    //ciclo per inserire elementi
    for (int i=0; i<n; i++) {
        cout<<"Inserisci il "<<i+1<<"o elemento"<<endl;
        cin>>numeri[i];
    }

    //ciclo calcolo somma
    for (int i=0; i<n; i++) {
        somma=somma+numeri[i];
    }

    media=somma/n;

    cout<<"La somma dei valori nel tuo array è di "<<somma<<", mentre la media dei valori è "<<media<<endl;
    
    return 0;
}
