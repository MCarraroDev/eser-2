//somma dei numeri finché non viene inserito un numero negativo,
//stampare poi somma e media senza negativo

#include <iostream>
using namespace std;

int main() {
    int numero, somma = 0, count=0;
    float media;

    do {
        cout << "inserisci un numero: ";
        cin >> numero;
        if (numero >= 0) {
            somma += numero; // somma = somma + numero
            count++;
        }
        
    } while (numero >= 0);
    
    if (count > 0) {
        media = float(somma)/count;
        cout << "La somma è: " << somma << "\n"
            << "E la media è: " << media << endl;
    } else {
        cout << "Nessun numero positivo inserito, impossibile calcolare la media." << endl;
    }
}