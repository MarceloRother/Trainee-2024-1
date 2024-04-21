//
// Created by MARCELO on 21/04/2024.
//
// & = Jogador / @ = caixa / X = entrega /

#include "Jogo.h"

Jogo::Jogo(Mapa mapa) {
    int posXJogador, posYJogador, posXCaixa, posYCaixa, posXEntrega, posYEntrega;
    for(int l = 0; l < 20; l++) {
        for (int c = 0; c < 20; c++) {
            if(mapa.getPosLabirinto(l, c) == '&'){
                posXJogador = l;
                posYJogador = c;
            }
            if(mapa.getPosLabirinto(l, c) == '@'){
                posXCaixa = l;
                posYCaixa = c;
            }
            if(mapa.getPosLabirinto(l, c) == 'X'){
                posXEntrega = l;
                posYEntrega = c;
            }
        }
    }
    this->jogador = Jogador(posXJogador, posYJogador);
    this->caixa = Caixa(posXCaixa, posYCaixa, posXEntrega, posYEntrega);
}