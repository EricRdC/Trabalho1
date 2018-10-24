//  LUCAS FEHLBERG FOLLADOR - 2018102195
//  ERIC DE CARVALHO - 2018103411
//  WITALO PIETLER PIMENTA DE SOUSA - 2018102359
#ifndef _JOGOPC_H
#define _JOGOPC_H
#include <iostream>
#include <string>
#include "Jogo.h"

using namespace std;
class PlataformaDigital;
class EmpresaDesenvolvedora;
class JogoPC: public Jogo{
private:
    float espacoDiscoRequerido;

public:
    JogoPC();
    JogoPC(string _nome, float _valor, string _gen, float espaco);
    float getEspacoDiscoReq();
    void setEspacoDiscoReq(float espaco);
    void imprimeInfoJogo();
    float getValorPromocao();
};

#endif // _JOGOPC_H

