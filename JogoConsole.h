//  LUCAS FEHLBERG FOLLADOR - 2018102195
//  ERIC DE CARVALHO - 2018103411
//  WITALO PIETLER PIMENTA DE SOUSA - 2018102359
#ifndef _JOGOCONSOLE_H
#define _JOGOCONSOLE_H
#include <iostream>
#include <string>
#include "Jogo.h"

using namespace std;

class PlataformaDigital;
class EmpresaDesenvolvedora;

class JogoConsole: public Jogo{
private:
    bool possuiMultiplayer;

public:
    JogoConsole();
    JogoConsole(string _nome, float _valor, string _gen, bool mult);
    bool getPossuiMultiplayer();
    void setPossuiMultiplayer(bool mult);
    void imprimeInfoJogo();
    float getValorPromocao(void);
};

#endif // _JOGOCONSOLE_H

