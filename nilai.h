#ifndef NILAI_H
#define NILAI_H

#include <iostream>
#include <string>

using namespace std;

// Struktur Stack Nilai
struct Nilai
{
    string nis;
    string mataPelajaran;
    int nilai;
    Nilai *next;
};

// Pointer Top Stack
extern Nilai *topNilai;

// Operasi Stack
void inputNilai();
void tampilNilai();
void editNilai();
void hapusNilai();

#endif