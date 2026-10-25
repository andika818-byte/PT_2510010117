#include <iostream>

using namespace std;

int main() {
    int n = 0;
    cout << "Masukkan n: ";
    cin >> n;

    int jumlah = 0;
    for (int i = 1; i <= n; i++) {
        jumlah += i;
    }

    cout << "Jumlah 1 sampai " << n << " = " << jumlah << "\n";
    return 0;
}