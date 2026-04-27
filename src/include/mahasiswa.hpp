#ifndef MAHASISWA_HPP
#define MAHASISWA_HPP

#include <string>

class Mahasiswa {
private:
    std::string nama;
    std::string nim;

public:
    // Constructor
    Mahasiswa(std::string nama, std::string nim);

    // Setter
    void setNama(std::string nama);
    void setNIM(std::string nim);

    // Getter
    std::string getNama() const;
    std::string getNIM() const;

    // Method
    void tampilkan() const;
};

#endif