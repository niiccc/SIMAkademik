#ifndef __MATAKULIAH_HPP__
#define __MATAKULIAH_HPP__

#include <iostream>

class matakuliah {
    private:
    std::string id;
    std::string namaMatkul;
    std::string kodeMatkul;
    int sksMatkul;
    int semMatkul;

    public:
    matakuliah(std::string id, std::string namaMatkul, std::string kodeMatkul, int sksMatkul, int semMatkul);

    void setId(std::string id);
    std::string getId();

    void setNamaMatkul(std::string namaMatkul);
    std::string getNamaMatkul();

    void setKodeMatkul(std::string kodeMatkul);
    std::string getKodeMatkul();

    void setSksMatkul(int sksMatkul);
    int getSksMatkul();

    void setSemMatkul(int semMatkul);
    int getSemMatkul();

};


#endif