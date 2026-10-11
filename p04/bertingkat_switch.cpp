#include <iostream>

using namespace std;

int main() {
    double nilai = 0;
    char huruf_mutu;

    cout << "Nilai akhir: ";
    cin >> nilai;

    switch (static_cast<int>(nilai) / 10) {
        case 10:
        case 9:
        case 8:
            huruf_mutu = 'A';
            break;

        case 7:
            huruf_mutu = 'B';
            break;

        case 6:
            huruf_mutu = 'C';
            break;

        default:
            huruf_mutu = 'D';
            break;
    }

    cout << "Huruf mutu: " << huruf_mutu << endl;

    return 0;
}