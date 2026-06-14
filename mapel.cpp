#include "mapel.h"

Mapel* headMapel = NULL;

// Tambah Mata Pelajaran
void tambahMapel() {

    Mapel* baru = new Mapel();

    cout << "\n=== Tambah Mata Pelajaran ===\n";

    cout << "Kode Mata Pelajaran : ";
    cin >> baru->kodeMapel;
    cin.ignore();

    cout << "Nama Mata Pelajaran : ";
    getline(cin, baru->namaMapel);

    cout << "Guru Pengampu       : ";
    getline(cin, baru->guruPengampu);

    baru->next = NULL;

    if (headMapel == NULL) {
        headMapel = baru;
    } else {

        Mapel* temp = headMapel;

        while (temp->next != NULL) {
            temp = temp->next;
        }

        temp->next = baru;
    }

    cout << "\nData mata pelajaran berhasil ditambahkan.\n";
}

// Tampilkan Mata Pelajaran
void tampilMapel() {

    if (headMapel == NULL) {
        cout << "\nData mata pelajaran masih kosong.\n";
        return;
    }

    cout << "\n=== DAFTAR MATA PELAJARAN ===\n";

    Mapel* temp = headMapel;
    int no = 1;

    while (temp != NULL) {

        cout << "\nData Ke-" << no++ << endl;
        cout << "Kode Mapel    : " << temp->kodeMapel << endl;
        cout << "Nama Mapel    : " << temp->namaMapel << endl;
        cout << "Guru Pengampu : " << temp->guruPengampu << endl;

        temp = temp->next;
    }
}

