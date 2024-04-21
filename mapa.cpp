//
// Created by MARCELO on 20/04/2024.
//
#include <iostream>

#include "mapa.h"

using namespace std;

Mapa::Mapa(char mapa[20][20]){
    for (int l = 0; l < 20; ++l) {
        for(int c = 0; c < 20; c ++){
            this->labirinto[l][c] = mapa[c][l];
        }
    }
}

void Mapa::printLabirinto(Jogador jogador, Caixa caixa){
    for(int l = 0; l < 20; l++){
        for(int c = 0; c < 20; c++){
            // Formatação do Mapa caso ainda não tenha encontrado a caixa
            if(!jogador.getCarregandoCaixa()){
                if((l == caixa.getPosX()) && (c == caixa.getPosY())){
                    cout << "@";
                }
            }
            // Formatação do Mapa caso tenha encontrado a caixa
            else{
                if((l == caixa.getPosXEntrega(jogador.getCarregandoCaixa())) && (c == caixa.getPosYEntrega(jogador.getCarregandoCaixa()))){
                    cout << "X";
                }
            }
            // Formatação base
            if((l == jogador.getPosX()) && (c == jogador.getPosY())){
                cout << "&";
            }
            else{
                cout << this->labirinto[l][c];
            }
        }
        cout << "\n";
    }
}

char Mapa::getPosLabirinto(int x, int y) {
    return this->labirinto[x][y];
}
