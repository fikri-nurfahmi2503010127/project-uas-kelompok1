#include <iostream>

#include "siswa.h"
#include "mapel.h"
#include "jadwal.h"
#include "nilai.h"
#include "pencarian.h"
#include "Pengurutan.h"

using namespace std;

void menuSiswa() {
    int pilih;

    do {
        cout << "\n===== MENU DATA SISWA =====\n";
        cout << "1. Tambah Siswa\n";
        cout << "2. Tampilkan Siswa\n";
        cout << "3. Edit Siswa\n";
        cout << "4. Hapus Siswa\n";
        cout << "0. Kembali\n";
        cout << "Pilihan : ";
        cin >> pilih;

        switch (pilih) {
            case 1: tambahSiswa(); break;
            case 2: tampilSiswa(); break;
            case 3: editSiswa(); break;
            case 4: hapusSiswa(); break;
            case 0: break;
            default:
                cout << "\nPilihan tidak valid!\n";
        }

    } while (pilih != 0);
}

void menuMapel() {
    int pilih;

    do {
        cout << "\n===== MENU MATA PELAJARAN =====\n";
        cout << "1. Tambah Mata Pelajaran\n";
        cout << "2. Tampilkan Mata Pelajaran\n";
        cout << "3. Edit Mata Pelajaran\n";
        cout << "4. Hapus Mata Pelajaran\n";
        cout << "0. Kembali\n";
        cout << "Pilihan : ";
        cin >> pilih;

        switch (pilih) {
            case 1: tambahMapel(); break;
            case 2: tampilMapel(); break;
            case 3: editMapel(); break;
            case 4: hapusMapel(); break;
            case 0: break;
            default:
                cout << "\nPilihan tidak valid!\n";
        }

    } while (pilih != 0);
}

void menuJadwal() {
    int pilih;

    do {
        cout << "\n===== MENU JADWAL =====\n";
        cout << "1. Tambah Jadwal\n";
        cout << "2. Tampilkan Jadwal\n";
        cout << "3. Hapus Jadwal\n";
        cout << "0. Kembali\n";
        cout << "Pilihan : ";
        cin >> pilih;

        switch (pilih) {
            case 1: tambahJadwal(); break;
            case 2: tampilJadwal(); break;
            case 3: hapusJadwal(); break;
            case 0: break;
            default:
                cout << "\nPilihan tidak valid!\n";
        }

    } while (pilih != 0);
}

void menuNilai() {
    int pilih;

    do {
        cout << "\n===== MENU NILAI SISWA =====\n";
        cout << "1. Input Nilai\n";
        cout << "2. Tampilkan Nilai\n";
        cout << "3. Edit Nilai\n";
        cout << "4. Hapus Nilai\n";
        cout << "0. Kembali\n";
        cout << "Pilihan : ";
        cin >> pilih;

        switch (pilih) {
            case 1: inputNilai(); break;
            case 2: tampilNilai(); break;
            case 3: editNilai(); break;
            case 4: hapusNilai(); break;
            case 0: break;
            default:
                cout << "\nPilihan tidak valid!\n";
        }

    } while (pilih != 0);
}

void menuPencarian() {
    int pilih;

    do {
        cout << "\n===== MENU PENCARIAN =====\n";
        cout << "1. Cari Siswa Berdasarkan NIS\n";
        cout << "2. Cari Mata Pelajaran Berdasarkan Kode\n";
        cout << "0. Kembali\n";
        cout << "Pilihan : ";
        cin >> pilih;

        switch (pilih) {
            case 1: cariSiswaByNIS(); break;
            case 2: cariMapelByKode(); break;
            case 0: break;
            default:
                cout << "\nPilihan tidak valid!\n";
        }

    } while (pilih != 0);
}

void menuPengurutan() {
    int pilih;

    do {
        cout << "\n===== MENU PENGURUTAN =====\n";
        cout << "1. Urutkan Siswa Berdasarkan NIS\n";
        cout << "2. Urutkan Siswa Berdasarkan Nama\n";
        cout << "3. Urutkan Nilai Tertinggi ke Terendah\n";
        cout << "0. Kembali\n";
        cout << "Pilihan : ";
        cin >> pilih;

        switch (pilih) {
            case 1:
                urutkanSiswaByNIS();
                tampilSiswa();
                break;

            case 2:
                urutkanSiswaByNama();
                tampilSiswa();
                break;

            case 3:
                urutkanNilaiTertinggi();
                tampilNilai();
                break;

            case 0:
                break;

            default:
                cout << "\nPilihan tidak valid!\n";
        }

    } while (pilih != 0);
}

int main() {

    int pilihan;

    do {

        cout << "\n=====================================\n";
        cout << "   SISTEM AKADEMIK SEDERHANA\n";
        cout << "=====================================\n";
        cout << "Kelompok 1\n";
        cout << "=====================================\n";
        cout << "1. Data Siswa\n";
        cout << "2. Mata Pelajaran\n";
        cout << "3. Jadwal Pelajaran\n";
        cout << "4. Nilai Siswa\n";
        cout << "5. Pencarian Data\n";
        cout << "6. Pengurutan Data\n";
        cout << "0. Keluar\n";
        cout << "=====================================\n";
        cout << "Pilihan : ";
        cin >> pilihan;

        switch (pilihan) {

            case 1:
                menuSiswa();
                break;

            case 2:
                menuMapel();
                break;

            case 3:
                menuJadwal();
                break;

            case 4:
                menuNilai();
                break;

            case 5:
                menuPencarian();
                break;

            case 6:
                menuPengurutan();
                break;

            case 0:
                cout << "\nTerima kasih telah menggunakan Sistem Akademik Sederhana.\n";
                break;

            default:
                cout << "\nPilihan tidak valid!\n";
        }

    } while (pilihan != 0);

    return 0;
}
