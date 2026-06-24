
#include "Pengurutan.h"
#include <algorithm>

// Sorting Siswa berdasarkan NIS (Ascending)
void urutkanSiswaByNIS()
{

    if (headSiswa == NULL || headSiswa->next == NULL)
    {
        cout << "\nData siswa tidak cukup untuk diurutkan.\n";
        return;
    }

    bool tukar;

    do
    {
        tukar = false;

        Siswa *current = headSiswa;

        while (current->next != NULL)
        {

            if (current->nis > current->next->nis)
            {

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

// Sorting Siswa berdasarkan Nama (Ascending)
void urutkanSiswaByNama()
{

    if (headSiswa == NULL || headSiswa->next == NULL)
    {
        cout << "\nData siswa tidak cukup untuk diurutkan.\n";
        return;
    }

    bool tukar;

    do
    {
        tukar = false;

        Siswa *current = headSiswa;

        while (current->next != NULL)
        {

            if (current->nama > current->next->nama)
            {

                swap(current->nis, current->next->nis);
                swap(current->nama, current->next->nama);
                swap(current->kelas, current->next->kelas);
                swap(current->alamat, current->next->alamat);

                tukar = true;
            }

            current = current->next;
        }

    } while (tukar);

    cout << "\nData siswa berhasil diurutkan berdasarkan Nama.\n";
}

// Sorting Nilai Tertinggi ke Terendah
void urutkanNilaiTertinggi()
{

    if (topNilai == NULL || topNilai->next == NULL)
    {
        cout << "\nData nilai tidak cukup untuk diurutkan.\n";
        return;
    }

    bool tukar;

    do
    {
        tukar = false;

        Nilai *current = topNilai;

        while (current->next != NULL)
        {

            if (current->nilai < current->next->nilai)
            {

                swap(current->nis,
                     current->next->nis);

                swap(current->mataPelajaran,
                     current->next->mataPelajaran);

                swap(current->nilai,
                     current->next->nilai);

                tukar = true;
            }

            current = current->next;
        }

    } while (tukar);

    cout << "\nData nilai berhasil diurutkan dari tertinggi ke terendah.\n";
}
