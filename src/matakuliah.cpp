#include "include/matakuliah.hpp"
#include <iostream>

// Constructor
MataKuliah::MataKuliah(std::string namaMK, int sks) {
    this->namaMK = namaMK;
    this->sks = sks;
}

// Getter
std::string MataKuliah::getNamaMK() const {
    return namaMK;
}

int MataKuliah::getSKS() const {
    return sks;
}

// Method
void MataKuliah::tampilkan() const {
    std::cout << "Mata Kuliah: " << namaMK << std::endl;
    std::cout << "SKS        : " << sks << std::endl;
}