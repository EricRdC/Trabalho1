//  LUCAS FEHLBERG FOLLADOR - 2018102195
//  ERIC DE CARVALHO - 2018103411
//  WITALO PIETLER PIMENTA DE SOUSA - 2018102359
#include <string>
#include "Jogo.h"
#include <iostream>

using namespace std;

Jogo::Jogo(){
    g = new Genero();
}

Jogo::Genero::Genero(){

}

Jogo::Genero::Genero(string _nome){
    this->nome = _nome;
}

Jogo::Jogo(string _nome, float _valor, string _gen){
    this->nome = _nome;
    this->valor = _valor;
    this-> g = new Genero(_gen);
    this->emPromocao = false;
    qtdJogos++;
}

Jogo::~Jogo(){
    qtdJogos--;
}

string Jogo::getNome(){
    return this->nome;
}

string Jogo::Genero::getNome(){
    return this->nome;
}

void Jogo::Genero::setNome(string _nome){
    this->nome = _nome;
}

void Jogo::setNome(string _nome){
    this->nome = _nome;
}

float Jogo::getValor(){
    return this->valor;
}

void Jogo::setValor(float _valor){
    this->valor = _valor;
}

Jogo::Genero* Jogo::getGenero(){
    return this->g;
}

void Jogo::setGenero(Jogo::Genero* gen){
    this->g = gen;
}

void Jogo::imprimeQtdJogos(){
    cout << qtdJogos << endl;
}

bool Jogo::getEmPromocao(void){
    return this->emPromocao;
}

void Jogo::setEmPromocao(bool p)
{
    this->emPromocao = p;
}
