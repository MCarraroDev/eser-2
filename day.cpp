// Inserire un numero da tastiera compreso tra 1 e 7, stampare il giorno
// della settimana corrispondente. 1=lunedì, 2=martedì … 7=domenica.

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    switch (n) {
        case 1:
            cout << "Lunedì";
            break;
        case 2:
            cout << "Martedì";
            break;
        case 3:
            cout << "Mercoledì";
            break;
        case 4:
            cout << "Giovedì";
            break;
        case 5:
            cout << "Venerdì";
            break;
        case 6:
            cout << "Sabato";
            break;
        case 7:
            cout << "Domenica";
            break;
        default:
            cout << "Errore: inserire un numero tra 1 e 7";
            break;
    }
    cout << "\n";

    return 0;
}