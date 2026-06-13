#ifndef NILAI_H
#define NILAI_H

#include <iostream>
#include <string>

using namespace std;

const int MAX_NILAI = 100;

// Struktur data nilai siswa
struct DataNilai {
    string nis;
    string mataPelajaran;
    float nilai;
};

// Class Stack Nilai
class StackNilai {
private:
    DataNilai stack[MAX_NILAI];
    int top;

public:
    // Constructor
    StackNilai();

    // Operasi Stack
    bool isEmpty();
    bool isFull();

    // Fitur Modul Nilai
    void inputNilai();
    void tampilkanNilai();
    void editNilai();
};

#endif
