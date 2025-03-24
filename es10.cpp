// Generare numeri casuali [-10, 70] finche la loro somma non e
// 400, Nel ciclo in cui vengono generati i numeri viene visualizzato: la
// media dei numeri generati e quanti multipli di 5 sono stati generati.

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
    srand(time(0));
    int sum = 0;
    int i = 0;
    int cont_mult = 0;
    
    while(sum<400) {
        int num = rand() % (70-(-10)+1) + (-10);
        sum += num;
        i++;
        if (num % 5 == 0) {
            cont_mult++;
        }
    }

    cout << "la media dei numeri è " << (float(sum)/i)
        << " e sono stati generati " << cont_mult << " multipli di 5" << endl;

    return 0;
}