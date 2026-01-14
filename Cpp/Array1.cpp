/*
 * Inserimento e lettura valori in un array
 */

#include <iostream>
using namespace std;

int main() {
    //dichiarazione array e variabili
    int n, numeri[100];

    cout<<"Quanti elementi vuoi inserire nell'array?"<<endl;
    cin>>n;

    //ciclo per inserire elementi
    for (int i=0; i<n; i++) {
        cout<<"Inserisci il "<<i+1<<"o elemento"<<endl;
        cin>>numeri[i];
    }

        //ciclo output
 /*   for (int o=0; o<n; o++) {
  *      if (o+1==n) {
  *          cout<<"Il "<<o+1<<"o numero inserito è "<<numeri[o]<<", ma non ha un successore al quale può essere sommato."<<endl;
  *      } else {
  *          cout<<"Il "<<o+1<<"o numero inserito è "<<numeri[o]<<" che, sommato al suo successore "<<numeri[o+1]<<" risulta: "<<numeri[o]+numeri[o+1]<<endl;
  *      }
  *      
  *  }
  */
        //ciclo output PARI
    for (int o=0; o<n; o++) {
            if (numeri[o]%2==0) {
            cout<<"Il "<<o+1<<"o numero inserito, che risulta essere pari, è "<<numeri[o]<<endl;                
            }
        }
        
    }
    
    return 0;
}