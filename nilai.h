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
