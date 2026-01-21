#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;

    cout<<"Quanti numeri vuoi inserire? ";
    cin>>n;

    //controllo se l'input è valido
    if (n<=0) {
        cout<<"Non puoi inserire 0 numeri!"<<endl;
        return 1;
    }

    //creo l'array
    int numeri [n];

    //ciclo in
    for (int i=0; i<n; i++) {
        cout<<"Inserisci il "<<i+1<<" numero: ";
        cin>>numeri[i];
    }

    //ciclo out
    cout<<"--Output--"<<endl;
    for (int i=0 ; i<n; i++) {
        for (int c=0; c<numeri[i]; c++) {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}