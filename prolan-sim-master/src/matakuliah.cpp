#include <iostream>
#include "include/matakuliah.hpp"

matakuliah::matakuliah(std::string id, std::string namaMatkul, std::string kodeMatkul, int sksMatkul, int semMatkul)
        : id(id), namaMatkul(namaMatkul), kodeMatkul(kodeMatkul), sksMatkul(sksMatkul), semMatkul(semMatkul)
{
}

void matakuliah::setId(std::string id)
{
    this->id = id;
}

std::string matakuliah::getId()
{
    return this->id;
}

void matakuliah::setNamaMatkul(std::string namaMatkul)
{
    this->namaMatkul = namaMatkul;
}

std::string matakuliah::getNamaMatkul(std::string namaMatkul)
{
    return this->namaMatkul;
}

void matakuliah::setKodeMatkul(std::string kodeMatkul)
{
    this->kodeMatkul = kodeMatkul;
}

std::string matakuliah::getKodeMatkul(std::string kodeMatkul)
{
    return this->kodeMatkul;
}

void matakuliah::setSksMatkul(int sksMatkul)
{
    this->sksMatkul = sksMatkul;
}

int matakuliah::getSksMatkul()
{
    return this->sksMatkul;
}

void matakuliah::setSemMatkul(int semMatkul)
{
    this->semMatkul = semMatkul;
}

int matakuliah::getSemMatkul()
{
    return this->semMatkul;
}