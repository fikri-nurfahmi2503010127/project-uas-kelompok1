#include "siswa.h"

Siswa* headSiswa = NULL;

// Tambah Data Siswa
void tambahSiswa() {
    Siswa* baru = new Siswa();

    cout << "\n=== Tambah Data Siswa ===\n";
    cout << "NIS    : ";
    cin >> baru->nis;
    cin.ignore();

    cout << "Nama   : ";
    getline(cin, baru->nama);

    cout << "Kelas  : ";
    getline(cin, baru->kelas);

    cout << "Alamat : ";
    getline(cin, baru->alamat);

    baru->next = NULL;

    if (headSiswa == NULL) {
        headSiswa = baru;
    } else {
        Siswa* temp = headSiswa;

        while (temp->next != NULL) {
            temp = temp->next;
        }

        temp->next = baru;
    }

    cout << "\nData siswa berhasil ditambahkan!\n";
}

// Tampilkan Data Siswa
void tampilSiswa() {

    if (headSiswa == NULL) {
        cout << "\nData siswa masih kosong.\n";
        return;
    }

    cout << "\n=== DAFTAR SISWA ===\n";

    Siswa* temp = headSiswa;
    int no = 1;

    while (temp != NULL) {

        cout << "\nData Ke-" << no++ << endl;
        cout << "NIS    : " << temp->nis << endl;
        cout << "Nama   : " << temp->nama << endl;
        cout << "Kelas  : " << temp->kelas << endl;
        cout << "Alamat : " << temp->alamat << endl;

        temp = temp->next;
    }
}
