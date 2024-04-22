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
    // Criando mapa
    char teste[20][20];
    for(int i = 0; i < 20; i++){
        for(int j = 0; j < 20; j++){
            if(i == 0 && j == 0){
                teste[i][j] = '&';
            }
            else if(i == 6 && j == 18){
                teste[i][j] = '@';
            }
            else if(i == 19 && j == 0){
                teste[i][j] = 'X';
            }
            else{
                teste[i][j] = '+';
            }
        }
    }
    // Inicializando objeto
    Mapa mapa = Mapa(teste);

    // Começando jogo
    Jogo jogo = Jogo(mapa);

    return 0;
}