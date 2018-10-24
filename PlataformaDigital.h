//  LUCAS FEHLBERG FOLLADOR - 2018102195
//  ERIC DE CARVALHO - 2018103411
//  WITALO PIETLER PIMENTA DE SOUSA - 2018102359
#ifndef _PLATAFORMADIGITAL_H
#define _PLATAFORMADIGITAL_H

#include "Jogo.h"
#include <string>
#include <vector>

using namespace std;

class PlataformaDigital{
    private:
        string nome;
        float carteiraDigital;

    public:
        vector<Jogo*> JogosCadastrados;
        vector<Jogo*> JogosInstalados;

        void imprimeJogosCadastrados();
        void imprimeJogosInstalados();
        void imprimeJogos(string genero);
        void adicionarCreditosCarteira(float creditos);
        int comprarJogo(Jogo* novoJogo);
        void instalarJogo();
        void desinstalarJogo();
        string getNome();
        void setNome(string _nome);
        float getCarteiraDigital();
        void setCarteiraDigital(float _carteiraDigital);
        friend void PresenteVirtual(PlataformaDigital* emissor, PlataformaDigital* receptor, Jogo* presente);
};

#endif // _PLATAFORMADIGITAL_H
