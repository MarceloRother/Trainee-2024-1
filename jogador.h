//
// Created by MARCELO on 20/04/2024.
//

#ifndef TRAINEE_2024_1_JOGADOR_H
#define TRAINEE_2024_1_JOGADOR_H


class Jogador {
private:
    int posX;
    int posY;
    bool carregandoCaixa;
public:
    // Get e Set
    int getPosX();
    void setPosX(int x);
    int getPosY();
    void setPosY(int y);
    bool getCarregandoCaixa();
    void setCarregandoCaixa(bool r);

    // Funções para movimento do jogador
    void andarDireita();
    void andarEsquerda();
    void andarCima();
    void andarBaixo();

    // Movimentos envolvendo a caixa
    void pegarCaixa(int x, int y); // x = caixa.posX / y = caixa.posY
    void deixarCaixa(int x, int y);// x = caixa.posXEntrega / y = caixa.posYEntrega

    Jogador(int x, int y);

};


#endif //TRAINEE_2024_1_JOGADOR_H
