// dato un numero n, scrivi se è primo

#include <iostream>
using namespace std;

int main() {
    int num;
    int primo = false;
    cin >> num;

    if (num < 2) {
        primo = false;
    } else if(num == 2){
        primo = true; 
    } else {
        primo = true; 
        for (int i = 3; i < num; i++) {
            if (num % i == 0){
                primo = false;
                break;
            }
        }
    }
    
    if (primo) {
        cout << "Primo" << endl;
    } else {
        cout << "Non primo" << endl;
    }

    return 0;
}