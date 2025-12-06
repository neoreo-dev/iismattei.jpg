//ahahhahahahahahah spid ahahahhahahahaha pd

#include <iostream>
using namespace std;

int main() {
    int year, age;

    cout <<"Inserisci qui il tuo anno di nascita"<< endl;
    cin>>year;

    if (year<=0) {
        cout<<"Assurdo, sei nato prima di Gesù! Penso tu abbia già lo spid, a questo punto."<< endl;
        return 0;
    } else if (year>2025) {
        cout<<"Anche se vieni dal futuro, cosa fighissima, non saprei aiutarti. Torna quando hai qualche anno in più!"<< endl;
        return 0;
    }

    age=2025-year;
    
    if (age>=18) {
        if (age>=100) {
            cout <<"Non lo so rick, sei sicuro di essere così vecchio?"<< endl; 
        } else {
            cout <<"Puoi farti lo spid!"<< endl;
        }
    } else {
        cout <<"Non puoi farti lo spid."<< endl;
    }
    return 0;
}