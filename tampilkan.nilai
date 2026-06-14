#include "nilai.h"

Nilai* topNilai = NULL;

// Input Nilai (Push)
void inputNilai() {

    Nilai* baru = new Nilai();

    cout << "\n=== Input Nilai Siswa ===\n";

    cout << "NIS             : ";
    cin >> baru->nis;

    cin.ignore();

    cout << "Mata Pelajaran  : ";
    getline(cin, baru->mataPelajaran);

    cout << "Nilai           : ";
    cin >> baru->nilai;

    baru->next = topNilai;
    topNilai = baru;

    cout << "\nNilai berhasil ditambahkan.\n";
}

// Tampilkan Nilai
void tampilNilai() {

    if (topNilai == NULL) {
        cout << "\nData nilai masih kosong.\n";
        return;
    }

    cout << "\n=== DAFTAR NILAI SISWA ===\n";

    Nilai* temp = topNilai;
    int no = 1;

    while (temp != NULL) {

        cout << "\nData Ke-" << no++ << endl;
        cout << "NIS            : " << temp->nis << endl;
        cout << "Mata Pelajaran : " << temp->mataPelajaran << endl;
        cout << "Nilai          : " << temp->nilai << endl;

        temp = temp->next;
    }
}

// Edit Nilai
void editNilai() {

    if (topNilai == NULL) {
        cout << "\nData nilai kosong.\n";
        return;
    }

    string cariNIS;
    string cariMapel;

    cout << "\nMasukkan NIS : ";
    cin >> cariNIS;

    cin.ignore();

    cout << "Masukkan Mata Pelajaran : ";
    getline(cin, cariMapel);

    Nilai* temp = topNilai;

    while (temp != NULL) {

        if (temp->nis == cariNIS &&
            temp->mataPelajaran == cariMapel) {

            cout << "\nData ditemukan!\n";

            cout << "Nilai Baru : ";
            cin >> temp->nilai;

            cout << "\nData berhasil diperbarui.\n";
            return;
        }

        temp = temp->next;
    }

    cout << "\nData tidak ditemukan.\n";
}

// Hapus Nilai (Pop)
void hapusNilai() {

    if (topNilai == NULL) {
        cout << "\nTidak ada data nilai yang dapat dihapus.\n";
        return;
    }

    Nilai* hapus = topNilai;

    cout << "\nData yang dihapus:\n";
    cout << "NIS            : " << hapus->nis << endl;
    cout << "Mata Pelajaran : " << hapus->mataPelajaran << endl;
    cout << "Nilai          : " << hapus->nilai << endl;

    topNilai = topNilai->next;

    delete hapus;

    cout << "\nData nilai berhasil dihapus.\n";
}
