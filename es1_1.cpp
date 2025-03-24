// Chiedi all'utente un numero N e stampa tutti i numeri da 1 a N

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << i << endl;
    }
    
    return 0;
}