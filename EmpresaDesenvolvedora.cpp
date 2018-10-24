//  LUCAS FEHLBERG FOLLADOR - 2018102195
//  ERIC DE CARVALHO - 2018103411
//  WITALO PIETLER PIMENTA DE SOUSA - 2018102359
#include "EmpresaDesenvolvedora.h"
#include "Jogo.h"
#include "JogoPC.h"
#include "JogoConsole.h"
#include <vector>
#include <iostream>

EmpresaDesenvolvedora::EmpresaDesenvolvedora(){}

EmpresaDesenvolvedora::EmpresaDesenvolvedora(string _nome){
    this->nome = _nome;
}

void EmpresaDesenvolvedora::criarJogo(int tipo){
    string aux_nome, aux_gen;
    float aux_valor, aux_espaco;
    JogoPC *jp;
    JogoConsole *jc;

    if (tipo==1){
        cout << "Qual o nome do jogo?" << endl;
        cin >> aux_nome;
        cout << "Qual o valor do jogo?" << endl;
        cin >> aux_valor;
        cout << "Qual espaco requerido do jogo?" << endl;
        cin >> aux_espaco;
        cout << "Qual o genero do jogo?" << endl;
        cin >> aux_gen;
        jp = new JogoPC(aux_nome, aux_valor, aux_gen, aux_espaco);
        jogosDesenvolvidos.push_back(jp);
        cout << "Jogo PC criado com sucesso!" << endl;
    }else{
        cout << "Qual o nome do jogo?" << endl;
        cin >> aux_nome;
        cout << "Qual o valor do jogo?" << endl;
        cin >> aux_valor;

        cout << "O jogo possui multiplayer?" << endl;
        cout << "1 - Sim" << endl;
        cout << "2 - Nao" << endl;
        int son;
        bool aux_mult;
        cin >> son;
        cout << endl;
        if (son==1){
            aux_mult = true;
        }else{
            aux_mult = false;
        }

        cout << "Qual o genero do jogo?";
        cin >> aux_gen;

        jc = new JogoConsole(aux_nome, aux_valor, aux_gen, aux_mult);
        jogosDesenvolvidos.push_back(jc);
        cout << "Jogo Console criado com sucesso!" << endl;
    }
}

void EmpresaDesenvolvedora::colocarJogoPromocao(){
    int p;

    cout << "Jogos Desenvolvidos:" << endl;
    for(int i=0; i<this->jogosDesenvolvidos.size(); i++){
        cout << i << " - " <<this->jogosDesenvolvidos[i] -> getNome() << endl;
    }
    cout << "Qual jogo deve ser colocado em promocao?" << endl;
    cin >> p;

    if (jogosDesenvolvidos[p]->getEmPromocao() == true){
        cout << "O jogo ja esta em promocao!";
    }else{
        jogosDesenvolvidos[p]->setEmPromocao(true);
        cout << "O jogo foi colocado em promocao!";
    }
}

string EmpresaDesenvolvedora::getNome(){
    return this->nome;
}

void EmpresaDesenvolvedora::setNome(string _nome){
    this->nome = _nome;
}
