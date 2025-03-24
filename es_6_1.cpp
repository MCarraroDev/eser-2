// Chiedi N, deve essere positivo

#include <iostream>
using namespace std;

int main() {
    int n;
    do {
        cout << "inserisci n: ";
        cin >> n;
    } while (n<1);
    
    cout << "numero inserito correttamente" << endl;
    return 0;
}