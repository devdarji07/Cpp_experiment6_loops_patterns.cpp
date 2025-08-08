// Dev Darji
// PRN - 24070123033
// ENTC A2
// EXPERIMENT 06

#include <iostream>
using namespace std;
int main() {
    int password =123;
    int input;
    int triesLeft =3;

    cout << "Secure Area Login\n";
    while (triesLeft) {
        cout << "\nPassword: (Remaining attempts: " << triesLeft << "): ";
        cin >> input;

        if (input == password) {
            cout << "Login successful. Access granted.\n";
            break;
        } else {
            cout << "Wrong password. Try again.\n";
            triesLeft--;
        }
    }

    if (triesLeft == 0) {
        cout << "\nMaximum attempts exceeded. Access blocked.\n";
    }

    return 0;
}
