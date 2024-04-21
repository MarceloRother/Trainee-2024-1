//
// Created by MARCELO on 20/04/2024.
//

#ifndef TRAINEE_2024_1_MAPA_H
#define TRAINEE_2024_1_MAPA_H

#include "jogador.h"
#include "caixa.h"


class Mapa {
private:
    char labirinto[20][20];
public:
    void printLabirinto(Jogador jogador, Caixa caixa);
    char getPosLabirinto(int x, int y);
    Mapa(char mapa[20][20]);
};


#endif //TRAINEE_2024_1_MAPA_H
