// Dev Darji
// PRN - 24070123033
// ENTC A2
// EXPERIMENT 06

#include <iostream>
using namespace std;
int main() {
    int a=1;
    int row =4;
    for (int i = 1; i <= row; i++) {
        for (int j = 1; j <= i; j++) {
            if (a<= 10)
                cout << a++ << " ";
        }
        cout << endl;
    }
   return 0;
}
