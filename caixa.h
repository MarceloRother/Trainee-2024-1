//
// Created by MARCELO on 20/04/2024.
//

#ifndef TRAINEE_2024_1_CAIXA_H
#define TRAINEE_2024_1_CAIXA_H


class Caixa {
private:
    int posX;
    int posY;
    int posXEntrega;
    int posYEntrega;
public:
    int getPosX();
    int getPosY();
    int getPosXEntrega(bool r); // r = jogador.pegouCaixa
    int getPosYEntrega(bool r); // r = jogador.pegouCaixa

    Caixa(int posX, int posY, int posXEntrega, int posYEntrega);

};


#endif //TRAINEE_2024_1_CAIXA_H
