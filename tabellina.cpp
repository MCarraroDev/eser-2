// Chiedi N e stampa la sua tabellina

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Inserisci n: ";
    cin >> n;

    for(int i = 1; i <= 10; i++) {
        cout << n*i << endl;
    }

    return 0;
}