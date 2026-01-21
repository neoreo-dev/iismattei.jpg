#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));

    int numeroDecimale=rand()%256;
    int binario[8]={8,0};
    int temp=numeroDecimale;

    for(int i=7; i>=0; i--) {
        binario[i]=temp%2;
        temp=temp/2;
    }

    cout<<"Numero decimale generato: "<<numeroDecimale<<endl;
    cout<<"Rappresentazione binaria: ";

    for(int i=0; i<8; i++) {
        cout<<binario[i];
        if (i==3) {
            cout<<" ";
        }
    }
    cout<<endl;
    
    return 0;
}