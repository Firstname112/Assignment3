#include "include/krs.hpp"
#include <iostream>

// Constructor
KRS::KRS(Mahasiswa mahasiswa, MataKuliah matakuliah)
    : mahasiswa(mahasiswa), matakuliah(matakuliah) {}

// Method
void KRS::tampilkan() const {
    std::cout << "=== Data KRS ===" << std::endl;
    mahasiswa.tampilkan();
    matakuliah.tampilkan();
}