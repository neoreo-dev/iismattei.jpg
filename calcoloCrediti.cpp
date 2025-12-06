/*
 * CREARE UN PROGRAMMA CHE, DATA IN INPUT LA MEDIA DEI VOTI, 
    CALCOLI IL NUMERO DI CREDITI SCOLASTICI ACQUISITI. 
    media < 6 BOCCIATO; 
    media = 6: crediti tra 7 e 8; 
    media maggiore di 6 ma minore uguale di 7: crediti tra 8 e 9; 
    media maggiore di 7 ma minore uguale di 8: crediti tra 9 e 10; 
    media maggiore di 8 ma minore uguale di 9: crediti tra 10 e 11; 
    media maggiore di 9 ma minore uguale di 10: crediti tra 11 e 12. 
 
    DOPO AVER INDIVIDUATO LA FASCIA DI APPARTENZENZA CHIEDERE ALL'UTENTE  
    SE L'ALUNNO HA CREDITI FORMATIVI ACQUISITI DURANTE L'ANNO. 
 
    QUINDI SCEGLIERE QUALE ESTREMO DELL'INTERVALLO ASSEGNARE USANDO LE SEGUENTI REGOLE: 
    - MEDIA CON DECIMALE > DI 0.5 E CREDITI FORMATIVI OK, SI SCEGLIE L'ESTREMO SUPERIORE; 
    - MEDIA CON DECIMALE < DI 0.5 SI SCEGLIE L'ESTREMO INFERIORE.
 */

//ORA PARLO IO


#include <iostream>

using namespace std;

int main() {
    float media,resto;
    int creditiBassi,creditiAlti,creditiInput,creditiSelezionati,mediaInteger;
    creditiSelezionati=0;
    
    cout<<"Inserisci qui la tua media scolastica"<<endl;
    cin>>media;

    mediaInteger=media;
    resto=media-(float)mediaInteger;
    
    if (media<6) {
        cout<<"La tua media è insufficiente e verrai bocciato."<<endl;
        return 0;
    } else if (media==6) {
        creditiBassi=7;
        creditiAlti=8;
    } else if (media>6 && media<=7) {
        creditiBassi=8;
        creditiAlti=9;
    } else if (media>7 && media<=8) {
        creditiBassi=9;
        creditiAlti=10;
    } else if (media>8 && media<=9) {
        creditiBassi=10;
        creditiAlti=11;
    } else if (media>9 && media<=10) {
        creditiBassi=11;
        creditiAlti=12;
    } else if (media==10) {
        creditiSelezionati=12;
    }

    if (creditiSelezionati==0) {
        cout<<"Inserisci qui il numero di crediti formativi che hai ottenuto durante l'anno"<<endl;
        cin>>creditiInput;
    }

    if (resto>=0.5 && creditiInput>0 && creditiSelezionati==0) {
        creditiSelezionati=creditiAlti;
    } else {
        creditiSelezionati=creditiBassi;
    }

    cout<<"Grazie alla tua media e al tuoi crediti ottenuti durante l'anno, ti verranno assegnati "<<creditiSelezionati<<" crediti."<<endl;
    
    return 0;
}
