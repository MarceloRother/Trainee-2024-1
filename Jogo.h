//
// Created by MARCELO on 21/04/2024.
//

#ifndef TRAINEE_2024_1_JOGO_H
#define TRAINEE_2024_1_JOGO_H

#include "jogador.h"
#include "mapa.h"
#include "caixa.h"

class Jogo {
private:
    Mapa mapa = Mapa(new char[20][20]);
    Jogador jogador = Jogador(0,0);
    Caixa caixa = Caixa(0, 0, 0, 0);
    enum class Estado {
        Menu,
        JogandoSemCaixa,
        JogandoComCaixa,
        Final
    };
    Estado estadoAtual;
public:
    Estado getEstado();
    void setEstado(Estado estado);
    void printMenu();
    void inicio();
    Jogo(Mapa mapa);
};


#endif //TRAINEE_2024_1_JOGO_H
