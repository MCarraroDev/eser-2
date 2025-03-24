#include <iostream>
using namespace std;

int inverso(int n) {
    int inv = 0;
    while (n > 0) {
        inv = inv * 10 + n % 10;
        n /= 10;
    }

    return inv;
}

int main() {
    int n;
    cin >> n;
    int inv = inverso(n);

    bool isPalindromo = (inv == n);

    cout << (isPalindromo ? "è palindromo" : "non è palindromo") << endl;
    
    return 0;
}