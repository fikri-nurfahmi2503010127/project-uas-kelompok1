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

// Cari Mata Pelajaran berdasarkan Kode
void cariMapelByKode() {

    if (headMapel == NULL) {
        cout << "\nData mata pelajaran masih kosong.\n";
        return;
    }

    string kodeCari;

    cout << "\n=== Cari Mata Pelajaran ===\n";
    cout << "Masukkan Kode Mapel : ";
    cin >> kodeCari;

    Mapel* temp = headMapel;

    while (temp != NULL) {

        if (temp->kodeMapel == kodeCari) {

            cout << "\n=== DATA DITEMUKAN ===\n";
            cout << "Kode Mapel    : " << temp->kodeMapel << endl;
            cout << "Nama Mapel    : " << temp->namaMapel << endl;
            cout << "Guru Pengampu : " << temp->guruPengampu << endl;

            return;
        }

        temp = temp->next;
    }

    cout << "\nData mata pelajaran tidak ditemukan.\n";
}
