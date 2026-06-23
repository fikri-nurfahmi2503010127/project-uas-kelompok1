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

// Edit Mata Pelajaran
void editMapel() {

    if (headMapel == NULL) {
        cout << "\nData mata pelajaran kosong.\n";
        return;
    }

    string cari;

    cout << "\nMasukkan Kode Mata Pelajaran yang akan diedit : ";
    cin >> cari;
    cin.ignore();

    Mapel* temp = headMapel;

    while (temp != NULL) {

        if (temp->kodeMapel == cari) {

            cout << "\nData ditemukan!\n";

            cout << "Nama Mata Pelajaran Baru : ";
            getline(cin, temp->namaMapel);

            cout << "Guru Pengampu Baru       : ";
            getline(cin, temp->guruPengampu);

            cout << "\nData berhasil diperbarui.\n";
            return;
        }

        temp = temp->next;
    }

    cout << "\nData tidak ditemukan.\n";
}

// Hapus Mata Pelajaran
void hapusMapel() {

    if (headMapel == NULL) {
        cout << "\nData mata pelajaran kosong.\n";
        return;
    }

    string cari;

    cout << "\nMasukkan Kode Mata Pelajaran yang akan dihapus : ";
    cin >> cari;

    Mapel* temp = headMapel;
    Mapel* prev = NULL;

    while (temp != NULL) {

        if (temp->kodeMapel == cari) {

            if (prev == NULL) {
                headMapel = temp->next;
            } else {
                prev->next = temp->next;
            }

            delete temp;

            cout << "\nData berhasil dihapus.\n";
            return;
        }

        prev = temp;
        temp = temp->next;
    }

    cout << "\nData tidak ditemukan.\n";
}

