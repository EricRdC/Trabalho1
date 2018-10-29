//  LUCAS FEHLBERG FOLLADOR - 2018102195
//  ERIC DE CARVALHO - 2018103411
//  WITALO PIETLER PIMENTA DE SOUSA - 2018102359
#include <iostream>
#include <string>
#include "JogoConsole.h"

using namespace std;

JogoConsole::JogoConsole(){

}

JogoConsole::JogoConsole (string _nome, float _valor , string _g, bool multi): Jogo(_nome, _valor, _g){
	this->possuiMultiplayer = multi;
}

bool JogoConsole::getPossuiMultiplayer(void){
    return possuiMultiplayer;
}
void JogoConsole::setPossuiMultiplayer(bool x){
    possuiMultiplayer = x;
}
void JogoConsole::imprimeInfoJogo (void){
    cout << "Nome (Console) " << nome << "  Genero: "<< getGenero()->getNome() << "  Valor: " << getValor() << "  Multiplayer: "<< this->possuiMultiplayer << endl << this->getId() << endl;
}
float JogoConsole::getValorPromocao(){
    if(emPromocao==true){
        return valor*0.9;
        }
    else{
        return valor;
        }
}
