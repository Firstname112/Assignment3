#ifndef KRS_HPP
#define KRS_HPP

#include "Mahasiswa.hpp"
#include "MataKuliah.hpp"

class KRS {
private:
    Mahasiswa mahasiswa;
    MataKuliah matakuliah;

public:
    // Constructor
    KRS(Mahasiswa mahasiswa, MataKuliah matakuliah);

    // Method
    void tampilkan() const;
};

#endif