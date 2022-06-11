#include <iostream>
#include "include/matakuliah.hpp"

using namespace std;

matakuliah::matakuliah (string MatKul []) {
    this->MataKuliah [] = MatKul [];
};

void matakuliah::printmatkul (){
    for (int i = 0; i < 5; i++) {
        cout << matakuliah [i] << endl;
    }
};
