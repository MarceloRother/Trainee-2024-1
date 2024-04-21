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
    Mapa mapa;
    Jogador jogador;
    Caixa caixa;
public:
    Jogo(Mapa mapa);
};


#endif //TRAINEE_2024_1_JOGO_H
