//
// Created by MARCELO on 20/04/2024.
//
#include <iostream>

#include "caixa.h"

using namespace std;

Caixa::Caixa(int posX, int posY, int posXEntrega, int posYEntrega){
    this->posX = posX;
    this->posY = posY;
    this->posXEntrega = posXEntrega;
    this->posYEntrega = posYEntrega;
}

int Caixa::getPosX() {
    return this->posX;
}

int Caixa::getPosY() {
    return this->posY;
}

int Caixa::getPosXEntrega(bool r) {
    if(!r){
        cout << "Caixa ainda não foi pega!" << endl;
    }
    else{
        return this->posXEntrega;
    }
}

int Caixa::getPosYEntrega(bool r) {
    if(!r){
        cout << "Caixa ainda não foi pega!" << endl;
    }
    else{
        return this->posYEntrega;
    }
}