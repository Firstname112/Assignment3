#include <iostream>
#include "include/Mahasiswa.hpp"
#include "include/MataKuliah.hpp"
#include "include/KRS.hpp"

using namespace std;

int main() {
    // Input data mahasiswa
    string nama, nim;
    cout << "Masukkan Nama Mahasiswa: ";
    getline(cin, nama);
    cout << "Masukkan NIM: ";
    getline(cin, nim);

    Mahasiswa mhs(nama, nim);

    // Input data mata kuliah
    string namaMK;
    int sks;
    cout << "\nMasukkan Nama Mata Kuliah: ";
    getline(cin, namaMK);
    cout << "Masukkan SKS: ";
    cin >> sks;

    MataKuliah mk(namaMK, sks);

    // Membuat KRS
    KRS krs(mhs, mk);

    // Menampilkan data
    cout << "\n=== Data KRS ===" << endl;
    krs.tampilkan();

    // Supaya tidak langsung tertutup
    cin.ignore();
    cin.get();

    return 0;
}