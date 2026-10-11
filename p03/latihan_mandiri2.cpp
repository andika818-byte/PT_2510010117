#include <iostream>
using namespace std;

int main() {
    int a, b;
    int hasilBagi, sisa;

    cout << "Masukkan bilangan pertama: ";
    cin >> a;

    cout << "Masukkan bilangan kedua: ";
    cin >> b;

    hasilBagi = a / b;
    sisa = a % b;

    cout << a << " dibagi " << b
         << " adalah " << hasilBagi
         << " sisa " << sisa << "." << endl;

    return 0;
}