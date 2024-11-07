#include <iostream>
using namespace std;

int main() {
    int kode, harga;
    char jenis;
    double diskon, harga_diskon;

    cout << "Masukkan kode barang: ";
    cin >> kode;
    cout << "Masukkan jenis barang (A, B, atau C): ";
    cin >> jenis;
    cout << "Masukkan harga barang: ";
    cin >> harga;

    switch (jenis) {
        case 'A':
            diskon = 0.1; // 10%
            break;
        case 'B':
            diskon = 0.15; // 15%
            break;
        case 'C':
            diskon = 0.2; // 20%
            break;
        default:
            cout << "Jenis barang tidak valid!" << endl;
            return 1;
    }

    harga_diskon = harga - (harga * diskon);

    cout << "Jenis barang " << jenis << " mendapat diskon " << diskon * 100 << "%" << endl;
    cout << "Harga setelah diskon: " << harga_diskon << endl;

    return 0;
}
