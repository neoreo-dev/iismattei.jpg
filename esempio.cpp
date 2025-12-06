/*
 * Dato un numero in input, dire se è pari o dispari.
 * Riportate le bombole vuote a tenaglia a tutto gas oooooOOOOOOoooooOOOOOO
 * Riportatele non le buttate a tenaglia a tutto gas ooooooOOOOOOooooOOOOO
 */

#include <iostream>
using namespace std;

int main() {
    int num; //dichiaro i numeri
    num=0; //assegnazione
    
    cout<<"Inserisci un numero e Tenaglia a tutto gas ti dirà se è pari o dispari"<<endl; 
    cin>>num;

    if (num % 2 == 0) { //verifico se modulo 2 del numero inserito è 0 aka vedo se è pari o no
        cout<<"Il numero " <<num<< ", da te inserito, è pari"<<endl;
    } else {
        cout<<"Il numero " <<num<< ", da te inserito, è dispari"<<endl;
    }
    
    return 0;
}