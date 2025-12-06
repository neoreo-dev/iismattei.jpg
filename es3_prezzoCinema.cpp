#include <iostream>
using namespace std;

int main() {
    //dichiarazione variabili
    int age, price;
    bool messageSent = false;

    //chiedo input
    cout << "Inserisci qui la tua età" << endl;
    cin >> age;

    //controlli vari
    if (age >= 0 && age <= 100) {
        if (age <= 9) {
            messageSent = true;
            cout << "Tu puoi entrare gratis, buon divertimento!" << endl;
        } else if (age >= 10 && age <= 14) {
            price = 5;
        } else if (age >= 15 && age <= 64) {
            price = 8;
        } else {
            price = 6;
        }

        if (!messageSent) {
            cout << "Il prezzo del tuo biglietto è di " << price << "€. Buona visione!" << endl;
        }
    } else {
        cout << "Età non valida." << endl;
    }

    return 0;
}
