//
// Created by MARCELO on 18/04/2024.
//
// & = Jogador / @ = caixa / X = entrega /
#include <iostream>

#include "jogador.h"
#include "mapa.h"
#include "caixa.h"
#include "Jogo.h"

using namespace std;

int main(){
    // Inicializando objetos
    char teste[20][20];
    Mapa mapa = Mapa(teste);

    Jogo jogo = Jogo(mapa);


    return 0;
}