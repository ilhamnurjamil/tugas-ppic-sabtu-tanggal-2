#include <iostream>

using namespace std;

int main() {
    int jam_masuk, jam_keluar, lama_parkir, biaya;

    cout << "Masukkan jam masuk (1-12): ";
    cin >> jam_masuk;

    cout << "Masukkan jam keluar (1-12): ";
    cin >> jam_keluar;

    if (jam_keluar > jam_masuk) {
        lama_parkir = jam_keluar - jam_masuk;
    } else {
        lama_parkir = 12 - jam_masuk + jam_keluar;
    }

    if (lama_parkir <= 2) {
        biaya = 2000;
    } else {
        biaya = 2000 + (lama_parkir - 2) * 500;
    }

    cout << "Lama parkir: " << lama_parkir << " jam" << endl;
    cout << "Biaya parkir: " << biaya << endl;

    return 0;
}
