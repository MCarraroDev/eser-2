// chiedi in input numeri compresi tra 10 e 50, conta quanti numeri pari sono stati inseriti
#include <iostream>
using namespace std;

int main() {
    int num, contaPari = 0;
    char continua;
    
    do {
        cout << "Inserisci un numero tra 10 e 50: ";
        cin >> num;
        
        if (num >= 10 && num <= 50) {
            if (num % 2 == 0) {
                contaPari++;
            }
        } else {
            cout << "Numero non valido! Deve essere tra 10 e 50.\n";
        }
        
        cout << "Vuoi inserire un altro numero? (s/n): ";
        cin >> continua;
    } while (continua == 's' || continua == 'S');
    
    cout << "Hai inserito " << contaPari << " numeri pari." << endl;
    
    return 0;
}