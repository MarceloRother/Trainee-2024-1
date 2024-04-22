//
// Created by MARCELO on 20/04/2024.
//
#include <iostream>

#include "mapa.h"

using namespace std;

Mapa::Mapa(char mapa[20][20]){
    for(int l = 0; l < 20; ++l){
        for(int c = 0; c < 20; c ++){
            this->labirinto[l][c] = mapa[l][c];
        }
    }
}

void Mapa::printLabirinto(){
    for(int l = 0; l < 20; l++){
        for(int c = 0; c < 20; c++){
            cout << this->labirinto[l][c];
        }
    }
    cout << "\n";
}

char Mapa::getPosLabirinto(int x, int y) {
    return this->labirinto[x][y];
}
