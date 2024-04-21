//
// Created by MARCELO on 20/04/2024.
//
#include <iostream>

#include "jogador.h"

using namespace std;

Jogador::Jogador(int x, int y){
    this->posX = x;
    this->posY = y;
    this->carregandoCaixa = false;
}

int Jogador::getPosX() {
    return this->posX;
}

void Jogador::setPosX(int x) {
    this->posX = x;
}

int Jogador::getPosY() {
    return this->posY;
}

void Jogador::setPosY(int y) {
    this->posY = y;
}

bool Jogador::getCarregandoCaixa() {
    return this->carregandoCaixa;
}

void Jogador::setCarregandoCaixa(bool r) {
    this->carregandoCaixa = r;
}

void Jogador::andarBaixo() {
    this->setPosY((this->getPosY()) - 1);
}

void Jogador::andarCima() {
    this->setPosY((this->getPosY()) + 1);
}

void Jogador::andarDireita() {
    this->setPosX((this->getPosX()) + 1);
}

void Jogador::andarEsquerda() {
    this->setPosX((this->getPosX()) - 1);
}

bool Jogador::pegarCaixa(int x, int y) {
    if((getPosX() == x) && (getPosY() == y)){
        setCarregandoCaixa(true);
        return true;
    }
    else{
        cout << "Local incorreto!" << endl;
    }
}

bool Jogador::deixarCaixa(int x, int y) {
    if((getPosX() == x) && (getPosY() == y)){
        setCarregandoCaixa(false);
    }
    else{
        cout << "Local de entrega incorreto!" << endl;
    }
}