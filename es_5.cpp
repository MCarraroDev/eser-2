// chiedi un numero N e stampa tutti i numeri da 1 a n in ordine decrescente
#include <iostream>
using namespace std;

int main() {
    int N;
    
    cout << "Inserisci un numero: ";
    cin >> N;
    
    cout << "Numeri da " << N << " a 1:" << endl;

    for(int i = N; i >= 1; i--) {
        cout << i << endl;
    }
    
    return 0;
}