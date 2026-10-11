#include <iostream>
using namespace std;

int main() {
    int totalDetik;
    int jam, menit, detik;

    cout << "Masukkan jumlah detik: ";
    cin >> totalDetik;

    jam = totalDetik / 3600;
    menit = (totalDetik % 3600) / 60;
    detik = totalDetik % 60;

    cout << jam << " jam "
         << menit << " menit "
         << detik << " detik" << endl;

    return 0;
}