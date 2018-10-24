//  LUCAS FEHLBERG FOLLADOR - 2018102195
//  ERIC DE CARVALHO - 2018103411
//  WITALO PIETLER PIMENTA DE SOUSA - 2018102359
#include <string>
#include <iostream>
#include "JogoPC.h"

using namespace std;

JogoPC::JogoPC(){

}

JogoPC::JogoPC(string _nome, float _valor, string _gen, float espaco):Jogo(_nome, _valor, _gen){
    this->espacoDiscoRequerido = espaco;
}

float JogoPC::getEspacoDiscoReq(){
    return this->espacoDiscoRequerido;
}

void JogoPC::setEspacoDiscoReq(float espaco){
    this->espacoDiscoRequerido = espaco;
}
void JogoPC::imprimeInfoJogo(){
    cout << "Nome (PC): " << nome << "  Genero: " << getGenero()->getNome() << "  Valor: " << getValor() << "  Espaco em Disco Requerido: " << this->getEspacoDiscoReq() << endl;
}

float JogoPC::getValorPromocao(){
    if(emPromocao== true){
        return (this->valor)*0.7;
    }
    else{
        return this->valor;
    }
}
