#include "include/mahasiswa.hpp"
#include <iostream>

// Constructor
Mahasiswa::Mahasiswa(std::string nama, std::string nim) {
    this->nama = nama;
    this->nim = nim;
}

// Setter
void Mahasiswa::setNama(std::string nama) {
    this->nama = nama;
}

void Mahasiswa::setNIM(std::string nim) {
    this->nim = nim;
}

// Getter
std::string Mahasiswa::getNama() const {
    return nama;
}

std::string Mahasiswa::getNIM() const {
    return nim;
}

// Method
void Mahasiswa::tampilkan() const {
    std::cout << "Nama: " << nama << std::endl;
    std::cout << "NIM : " << nim << std::endl;
}