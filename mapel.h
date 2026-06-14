#ifndef MAPEL_H
#define MAPEL_H

#include <iostream>
#include <string>

using namespace std;

struct Mapel {
    string kodeMapel;
    string namaMapel;
    string guruPengampu;
    Mapel* next;
};

extern Mapel* headMapel;

// CRUD Mata Pelajaran
void tambahMapel();
void tampilMapel();

#endif
