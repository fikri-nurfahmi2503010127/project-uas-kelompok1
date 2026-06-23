#ifndef JADWAL_H
#define JADWAL_H

#include <iostream>
#include <string>

using namespace std;

// Struktur Queue Jadwal
struct Jadwal {
    string hari;
    string jam;
    string kelas;
    string mataPelajaran;
    Jadwal* next;
};

// Pointer Queue
extern Jadwal* frontJadwal;
extern Jadwal* rearJadwal;

// Operasi Queue
void tambahJadwal();
void tampilJadwal();
void hapusJadwal();

#endif
