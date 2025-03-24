// random tra 20 e 50 inclusi

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
    int MAX=50, MIN=20;

    srand(time(0));

    int n = rand() % (MAX - MIN + 1) + MIN;

    cout << n
        << endl;


    return 0;
}