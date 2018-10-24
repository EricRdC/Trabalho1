//  LUCAS FEHLBERG FOLLADOR - 2018102195
//  ERIC DE CARVALHO - 2018103411
//  WITALO PIETLER PIMENTA DE SOUSA - 2018102359
#include "PlataformaDigital.h"
#include "Jogo.h"
#include <vector>
#include <string>
#include <iostream>

using namespace std;

void PlataformaDigital::imprimeJogosCadastrados(){
    if(JogosCadastrados.empty() == false){
        for(unsigned int i=0; i<this->JogosCadastrados.size(); i++){
            cout << i << " - " <<JogosCadastrados[i]->getNome() << endl;
        }
    }
    else{
        cout << "Nao ha jogos cadastrados!" << endl;
    }
}

void PlataformaDigital::imprimeJogosInstalados(){
    if(JogosInstalados.empty() == false){
        for(unsigned int i=0; i<this->JogosInstalados.size(); i++){
            cout << i << " - " <<JogosInstalados[i]->getNome();
        }
    }
    else{
        cout << "Nao ha jogos instalados!" << endl;
    }
}

void PlataformaDigital::imprimeJogos(string genero){
    if(JogosCadastrados.empty() == false){
        for(unsigned int i=0; i<this->JogosCadastrados.size(); i++){
            if (this->JogosCadastrados[i]->getGenero()->getNome() == genero){
                cout << " - " << this->JogosCadastrados[i]->getNome() << endl;
            }
        }
    }
    else{
        cout << "Nao ha jogos cadastrados!" << endl;
    }
}

void PlataformaDigital::adicionarCreditosCarteira(float creditos){
    this->carteiraDigital =+ creditos;
    cout << "Creditos adicionados com sucesso!" << endl;
}

int PlataformaDigital::comprarJogo(Jogo* novoJogo){    // Warning resolvido! //
int x = 0;

    if(this->carteiraDigital >= novoJogo->getValorPromocao()){
        for(unsigned int i=0; i<this->JogosCadastrados.size(); i++){
            if (novoJogo->getNome() == JogosCadastrados[i]->getNome()){
                x = 1;
            }
            }
        if(x == 1){
            cout << "Esse jogo ja esta instalado na plataforma!" << endl;
            return 0;
            }
        else{
            this->carteiraDigital -= novoJogo->getValorPromocao();
            JogosCadastrados.push_back(novoJogo);
            cout << "Jogo comprado com sucesso!" << endl;
            return 1;
            }
    }
    else{
        cout << "Voce nao possui creditos suficientes para comprar esse jogo! Adicione mais para compra-lo." << endl;
        return 0;
        }
}

void PlataformaDigital::instalarJogo(){
    int p;

    if (this->JogosCadastrados.size()==0){
        cout << "Nao ha jogos cadastrados para serem instalados!" << endl;
    }else{
        cout << "Jogos Cadastrados:" << endl;
        this->imprimeJogosCadastrados();
        cout << "Qual jogo deseja instalar? ";
        cin >> p;
    }

    int r = 0;
    for(unsigned int i=0; i<this->JogosInstalados.size(); i++){
        if (JogosCadastrados[p] == JogosInstalados[i]){
            cout << "Esse jogo ja esta instalado!" << endl;
            r =+ 1;
            break;
        }
    }

    if (r==0){
        JogosInstalados.push_back(JogosCadastrados[p]);
        cout << "Jogo Instalado com sucesso!" << endl;
    }
}

void PlataformaDigital::desinstalarJogo(){
    int p;

    if (JogosInstalados.size()==0){
        cout << "Não ha jogos instalados!" << endl;
    }else{
        cout << "Jogos Instalados:" << endl;
        this->imprimeJogosInstalados();
        cout << endl;
        cout << "Qual jogo deseja desinstalar?" << endl;
        cin >> p;

        JogosInstalados.erase (JogosInstalados.begin()+p);
        cout << "Jogo desinstalado com sucesso!" << endl;
    }
}

string PlataformaDigital::getNome(){
    return this->nome;
}

void PlataformaDigital::setNome(string _nome){
    this->nome = _nome;
}

float PlataformaDigital::getCarteiraDigital(){
    return this->carteiraDigital;
}

void PlataformaDigital::setCarteiraDigital(float _carteiraDigital){
    this->carteiraDigital = _carteiraDigital;
}
