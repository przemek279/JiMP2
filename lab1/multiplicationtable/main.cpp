//
// Created by albert on 06.03.17.
//
#include <iostream>
#include "MultiplicationTable.h"

int main() {
    int tab[10][10] = {0};

    MultiplicationTable(tab);

    for(int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if(tab[i][j] < 10) std::cout << " ";
            std::cout << tab[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

