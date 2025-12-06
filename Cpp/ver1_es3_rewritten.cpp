//ESERCIZIO 3
//Crea un programma che chieda all'utente un numero intero e poi stampi a video l'intera tabellina di quel numero (dalla moltiplicazione per 1 fino a quella per 10). 

#include <iostream>
using namespace std;

int main() {
    //variabili
    int input, tabellina, value;

    cout<<"Inserisci un numero per ottenere la sua tabellina"<<endl;
    cin>>input;

    if (input==0) {
        cout<<"La tabellina dello 0 è composta da soli zeri."<<endl;
        return 0;
    }

    cout<<"Ecco la tabellina del "<<input<<"."<<endl;

    for (tabellina = 1; tabellina < 11; tabellina++) {
      	value=input*tabellina;
        cout<<value<<endl;
    }
    
    return 0;
}