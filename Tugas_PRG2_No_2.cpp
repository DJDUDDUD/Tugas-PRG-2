#include <iostream>
#include <math.h>

using namespace std;

int main () {
    
    int x,a;

    cout << "Diberikan fungsi: \n";
    cout << "f(x) = 225x^3 + 137x^2 - 345x + 11\n";
    cout << "Carilah hasil fungsi untuk nilai x = ";
    cin >> x;

    if (x < 1) {
        cout << "\nMaaf, nilai x yang anda masukkan tidak sesuai syarat untuk x !!\n";

    }

    else if (x <= 25) {
        a = 225 * pow (x,3) + 137 * pow(x,2) - 345 * x + 11;

        cout << "\nNilai dari fungsi f(" << x << ") adalah " << a;
    }

    else {
        cout << "\nMaaf, nilai x yang anda masukkan tidak sesuai syarat untuk x !!\n";
    }

    return 0;
}