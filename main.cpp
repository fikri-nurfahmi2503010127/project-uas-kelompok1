#include <iostream>

using namespace std;

int main() {
    int pilihan;

    do {
        cout << "\n===== SISTEM AKADEMIK =====\n";
        cout << "1. Data Siswa\n";
        cout << "2. Mata Pelajaran\n";
        cout << "3. Jadwal\n";
        cout << "4. Nilai\n";
        cout << "5. Pencarian & Pengurutan\n";
        cout << "0. Keluar\n";
        cout << "Pilih: ";
        cin >> pilihan;

    } while(pilihan != 0);

    return 0;
}
