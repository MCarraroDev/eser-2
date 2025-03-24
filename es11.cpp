// Inserire un numero da tastiera compreso tra 1 e 7, stampare il giorno
// della settimana corrispondente. 1=lunedì, 2=martedì … 7=domenica.

#include <iostream>
using namespace std;

int main() {
    int numero;  // variabile per memorizzare il numero del giorno

    // Richiesta input all'utente
    cout << "Inserisci un numero tra 1 e 7: ";
    cin >> numero;

    // Switch per determinare il giorno della settimana
    switch(numero) {
        case 1:
            cout << "Lunedì" << endl;
            break;
        case 2:
            cout << "Martedì" << endl;
            break;
        case 3:
            cout << "Mercoledì" << endl;
            break;
        case 4:
            cout << "Giovedì" << endl;
            break;
        case 5:
            cout << "Venerdì" << endl;
            break;
        case 6:
            cout << "Sabato" << endl;
            break;
        case 7:
            cout << "Domenica" << endl;
            break;
        default:
            cout << "Errore: inserire un numero tra 1 e 7" << endl;
    }
    
    return 0;
}