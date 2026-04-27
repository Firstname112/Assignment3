#ifndef MATAKULIAH_HPP
#define MATAKULIAH_HPP

#include <string>

class MataKuliah {
private:
    std::string namaMK;
    int sks;

public:
    // Constructor
    MataKuliah(std::string namaMK, int sks);

    // Getter
    std::string getNamaMK() const;
    int getSKS() const;

    // Method
    void tampilkan() const;
};

#endif