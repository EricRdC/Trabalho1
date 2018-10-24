//  LUCAS FEHLBERG FOLLADOR - 2018102195
//  ERIC DE CARVALHO - 2018103411
//  WITALO PIETLER PIMENTA DE SOUSA - 2018102359
#ifndef _EMPRESADESENVOLVEDORA_H
#define _EMPRESADESENVOLVEDORA_H

#include "Jogo.h"
#include "JogoPC.h"
#include "JogoConsole.h"
#include <string>
#include <vector>

using namespace std;

class EmpresaDesenvolvedora{
    private:
        string nome;

    public:
        vector<Jogo*> jogosDesenvolvidos;

        EmpresaDesenvolvedora();
        EmpresaDesenvolvedora(string _nome);
        void criarJogo(int tipo);
        void colocarJogoPromocao();
        string getNome();
        void setNome(string _nome);
};

#endif // _EMPRESADESENVOLVEDORA_H
