//
// Created by MARCELO on 21/04/2024.
//
// & = Jogador / @ = caixa / X = entrega /
#include <iostream>

#include "Jogo.h"

using namespace std;

Jogo::Jogo(Mapa mapa){
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
    this->estadoAtual = Estado::Menu;
    inicio();
}

Jogo::Estado Jogo::getEstado() {
    return this->estadoAtual;
}

void Jogo::setEstado(Jogo::Estado estado) {
    this->estadoAtual = estado;
}

void Jogo::printMenu() {
    cout << "---------- MENU ----------" << endl;
    mapa.printLabirinto();
    cout << "1- Começar \n2- Sair \n";
}

void Jogo::inicio() {
    while(estadoAtual != Estado::Final){
        if(estadoAtual == Estado::Menu){
            int user;
            printMenu();
            cin >> user;
            if(user == 1){
                setEstado(Estado::JogandoSemCaixa);
            }
            else if(user == 2){
                setEstado(Estado::Final);
            }
        }
        else if(estadoAtual == Estado::JogandoSemCaixa){
            if(jogador.pegarCaixa(caixa.getPosX(), caixa.getPosY())){
                this->estadoAtual = Estado::JogandoComCaixa;
                continue;
            }
            else{
                if(jogador.getPosX() < caixa.getPosX()){
                    jogador.andarDireita();
                }
                else if(jogador.getPosX() > caixa.getPosX()){
                    jogador.andarEsquerda();
                }

                if(jogador.getPosY() < caixa.getPosY()){
                    jogador.andarCima();
                }
                else if(jogador.getPosY() > caixa.getPosY()){
                    jogador.andarBaixo();
                }
            }
        }
        else{
            if(jogador.deixarCaixa(caixa.getPosX(), caixa.getPosY())){
                this->estadoAtual = Estado::Final;
                continue;
            }
            else{
                if(jogador.getPosX() < caixa.getPosX()){
                    jogador.andarDireita();
                }
                else if(jogador.getPosX() > caixa.getPosX()){
                    jogador.andarEsquerda();
                }

                if(jogador.getPosY() < caixa.getPosY()){
                    jogador.andarCima();
                }
                else if(jogador.getPosY() > caixa.getPosY()){
                    jogador.andarBaixo();
                }
            }
        }
    }
    cout << "---------- Final ----------" << endl;
    cout << "Feito por: \n- Barcelos Rotas" << endl;
    return;
}