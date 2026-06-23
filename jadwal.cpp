#include "jadwal.h"

Jadwal* frontJadwal = NULL;
Jadwal* rearJadwal = NULL;

// Tambah Jadwal (Enqueue)
void tambahJadwal() {

    Jadwal* baru = new Jadwal();

    cout << "\n=== Tambah Jadwal Pelajaran ===\n";

    cin.ignore();

    cout << "Hari            : ";
    getline(cin, baru->hari);

    cout << "Jam             : ";
    getline(cin, baru->jam);

    cout << "Kelas           : ";
    getline(cin, baru->kelas);

    cout << "Mata Pelajaran  : ";
    getline(cin, baru->mataPelajaran);

    baru->next = NULL;

    if (frontJadwal == NULL) {
        frontJadwal = rearJadwal = baru;
    } else {
        rearJadwal->next = baru;
        rearJadwal = baru;
    }

    cout << "\nJadwal berhasil ditambahkan.\n";
}

// Tampilkan Jadwal
void tampilJadwal() {

    if (frontJadwal == NULL) {
        cout << "\nData jadwal masih kosong.\n";
        return;
    }

    cout << "\n=== DAFTAR JADWAL PELAJARAN ===\n";

    Jadwal* temp = frontJadwal;
    int no = 1;

    while (temp != NULL) {

        cout << "\nJadwal Ke-" << no++ << endl;
        cout << "Hari           : " << temp->hari << endl;
        cout << "Jam            : " << temp->jam << endl;
        cout << "Kelas          : " << temp->kelas << endl;
        cout << "Mata Pelajaran : " << temp->mataPelajaran << endl;

        temp = temp->next;
    }
}
// Hapus Jadwal (Dequeue)
void hapusJadwal() {

    if (frontJadwal == NULL) {
        cout << "\nTidak ada jadwal yang dapat dihapus.\n";
        return;
    }

    Jadwal* hapus = frontJadwal;

    cout << "\nJadwal yang dihapus:\n";
    cout << "Hari           : " << hapus->hari << endl;
    cout << "Jam            : " << hapus->jam << endl;
    cout << "Kelas          : " << hapus->kelas << endl;
    cout << "Mata Pelajaran : " << hapus->mataPelajaran << endl;

    frontJadwal = frontJadwal->next;

    if (frontJadwal == NULL) {
        rearJadwal = NULL;
    }

    delete hapus;

    cout << "\nJadwal berhasil dihapus.\n";
}
