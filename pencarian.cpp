#include "pencarian.h"

// Cari Siswa berdasarkan NIS
void cariSiswaByNIS() {

    if (headSiswa == NULL) {
        cout << "\nData siswa masih kosong.\n";
        return;
    }

    string nisCari;

    cout << "\n=== Cari Siswa ===\n";
    cout << "Masukkan NIS : ";
    cin >> nisCari;

    Siswa* temp = headSiswa;

    while (temp != NULL) {

        if (temp->nis == nisCari) {

            cout << "\n=== DATA DITEMUKAN ===\n";
            cout << "NIS    : " << temp->nis << endl;
            cout << "Nama   : " << temp->nama << endl;
            cout << "Kelas  : " << temp->kelas << endl;
            cout << "Alamat : " << temp->alamat << endl;

            return;
        }

        temp = temp->next;
    }

    cout << "\nData siswa tidak ditemukan.\n";
}
