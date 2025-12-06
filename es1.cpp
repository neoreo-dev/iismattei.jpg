/*
* Chiesti 2 numeri interi in ingresso:
* 1- Dire se sono pari o dispari
* 2- Fare la somma
* 3- Calcolare la media
*/

//riportate le bombole vuote a tenaglia a tutto gas

#include <iostream>
using namespace std;

int main () {
    //dichiaro le variabili
    int num1=0;
    int num2=0;
    float somma=0;
    float media=0;
    
    cout<<"Inserisci un numero"<<endl;
    cin>>num1;

    cout<<"Inserisci un altro numero"<<endl;
    cin>>num2;

    if (num1 % 2 == 0) { //verifico se modulo 2 del numero inserito è 0 aka vedo se è pari o no
        cout<<"Il primo numero, " <<num1<< ", è pari"<<endl;
    } else {
        cout<<"Il primo numero, " <<num1<< ", è dispari"<<endl;
    }

        if (num2 % 2 == 0) { //verifico se modulo 2 del numero inserito è 0 aka vedo se è pari o no
        cout<<"Il secondo numero, " <<num2<< ", è pari"<<endl;
    } else {
        cout<<"Il secondo numero, " <<num2<< ", è dispari"<<endl;
    }

    somma=num1+num2;
    media=somma/2;

    cout<<"La somma dei due numeri è " <<somma<< ", mentre la loro media è " <<media<< "."<<endl;
}