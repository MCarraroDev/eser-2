// Chiedi N, conta quante cifre ha.

#include <iostream>
using namespace std;

int main() {
    int n, somma_cifre = 0;
    cin >> n;

    while (n > 0) {
        n /= 10;
        somma_cifre++;
    }
    
    cout << somma_cifre << endl;
}