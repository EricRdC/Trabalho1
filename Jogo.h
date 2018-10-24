//  LUCAS FEHLBERG FOLLADOR - 2018102195
//  ERIC DE CARVALHO - 2018103411
//  WITALO PIETLER PIMENTA DE SOUSA - 2018102359
#ifndef _JOGO_H
#define _JOGO_H
#include <iostream>
#include <string>

using namespace std;
class PlataformaDigital;
class EmpresaDesenvolvedora;
class Jogo{
    class Genero{
        private:
            string nome;

        public:
            Genero();
            Genero(string _nome);
            string getNome();
            void setNome(string _nome);
            };

private:
Jogo::Genero* g;

protected:
string nome;
float valor;
bool emPromocao;

public:
 Jogo();
 Jogo(string _nome, float _valor, string _gen);
 ~Jogo();
 string getNome();
 static int qtdJogos;
 void setNome(string _nome);
 float getValor();
 void setValor(float _valor);
 Jogo::Genero* getGenero();
 void setGenero(Jogo::Genero* gen);
 static void imprimeQtdJogos();
 virtual void imprimeInfoJogo() = 0;
 virtual float getValorPromocao() = 0;
 bool getEmPromocao (void);
 void setEmPromocao (bool p);
 friend void PresenteVirtual(PlataformaDigital* platj1, PlataformaDigital* platj2, Jogo* presente);
};
#endif // _JOGO_H
