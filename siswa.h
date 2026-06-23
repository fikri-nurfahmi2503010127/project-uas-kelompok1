#ifndef SISWA_H
#define SISWA_H

#include <iostream>
#include <string>

using namespace std;

struct Siswa {
    string nis;
    string nama;
    string kelas;
    string alamat;
    Siswa* next;
};

extern Siswa* headSiswa;

// CRUD Data Siswa
void tambahSiswa();
void tampilSiswa();
void editSiswa();
void hapusSiswa();

#endif
