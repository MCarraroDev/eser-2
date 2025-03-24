// Genera 10 numeri randomici [1, 100], conta:
// a. Quanti sono compresi [10, 20]
// b. Quanti sono compresi [40,50]
// c. Quanti sono compresi [60,70]

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
    srand(time(0));
    int conto_10_20 = 0;
    int conto_40_50 = 0;
    int conto_60_70 = 0;

    for (int i = 1; i <= 10; i++)
    {
        int n = rand() % 100 + 1; // rand() % (max - min + 1) + min
        if (n >= 10 && n <= 20) 
        {
            conto_10_20++;
        }
        else if (n >= 40 && n <= 50)
        {
            conto_40_50++;
        }
        else if (n >= 60 && n <= 70)
        {
            conto_60_70++;
        }
        
    }
    
    cout << "i numeri compresi tra 10 e 20 sono " << conto_10_20 << "\n"
        << "i numeri compresi tra 40 e 50 sono " << conto_40_50 << "\n"
        << "i numeri compresi tra 60 e 70 sono " << conto_60_70 << endl;

    return 0;
}