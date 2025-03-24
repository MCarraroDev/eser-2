// 1234 --> 4321
#include <iostream>
using namespace std;

int main() {
    int n, inv = 0;
    cin >> n;

    while (n > 0) {
        inv = inv * 10 + n % 10;
        n /= 10;
    }
    
    cout << inv << endl;
    return 0;
}