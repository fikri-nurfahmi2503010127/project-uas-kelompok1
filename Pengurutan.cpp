
#include "pengurutan.h"

// Sorting Siswa berdasarkan NIS (Ascending)
void urutkanSiswaByNIS() {

    if (headSiswa == NULL || headSiswa->next == NULL) {
        cout << "\nData siswa tidak cukup untuk diurutkan.\n";
        return;
    }

    bool tukar;

    do {
        tukar = false;

        Siswa* current = headSiswa;

        while (current->next != NULL) {

            if (current->nis > current->next->nis) {

                swap(current->nis, current->next->nis);
                swap(current->nama, current->next->nama);
                swap(current->kelas, current->next->kelas);
                swap(current->alamat, current->next->alamat);

                tukar = true;
            }

            current = current->next;
        }

    } while (tukar);

    cout << "\nData siswa berhasil diurutkan berdasarkan NIS.\n";
}
