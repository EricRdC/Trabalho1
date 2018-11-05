//  LUCAS FEHLBERG FOLLADOR - 2018102195
//  ERIC DE CARVALHO - 2018103411
//  WITALO PIETLER PIMENTA DE SOUSA - 2018102359
#include "PlataformaDigital.h"
#include "EmpresaDesenvolvedora.h"
#include "Jogo.h"
#include "JogoConsole.h"
#include "JogoPC.h"
#include <iostream>
#include <string>
#include <vector>
#include <windows.h>

using namespace std;

int Jogo::qtdJogos = 0;

void menu(){
    cout << " 1. Criar jogo" << endl << " 2. Colocar Jogo em Promocao" << endl << " 3. Comprar Jogo" << endl << " 4. Adicionar Creditos na Carteira" << endl << " 5. Instalar jogo" << endl << " 6. Desinstalar Jogos" << endl << " 7. Imprimir jogos Cadastrados" << endl << " 8. Imprimir Instalados" << endl << " 9. Imprimir Jogos Cadastrados por Genero" << endl << "10. Presentear Plataforma" << endl << "11. Imprimir Quantidade de Jogos Criados" << endl << "12. Sair" << endl;
   }

void limpatela()
{
    system("cls");
}


void presenteVirtual(PlataformaDigital *platj1, PlataformaDigital *platj2, Jogo *presente){
               unsigned int h, i;
                platj1->setCarteiraDigital(platj1->getCarteiraDigital() - presente->getValorPromocao());
                    for (i=0; i<platj2->JogosCadastrados.size(); i++){
                        if (platj2->JogosCadastrados[i]->getNome() == presente->getNome()){
                            h=1;
                    }
              }
              if (h==1){
                   cout << "Jogo ja cadastrado na Plataforma! Sera convertido em creditos" << endl;
                   platj2->setCarteiraDigital(platj2->getCarteiraDigital() + presente->getValorPromocao());
              }
            else{
                    platj2->JogosCadastrados.push_back(presente);
                    cout << "Jogo presenteado com sucesso!" << endl;
              }
                }
int selecionarEmpresa(){
                int select;
                cout << "Selecione a empresa desenvolvedora:" << endl << "1. Riot Games" << endl << "2. Valve" << endl << "3. Electronic Arts" << endl;
                cin >> select;
                while ((select < 1) || (select > 3)){
                cout << "Digite uma empresa nas opcoes de 1 a 3" << endl;
                cin >> select
                return select;
                }
int selecionarPlataformaDig(){
                int select;
                cout << "Selecione a plataforma digital:" << endl << "1. Steam" << endl << "2. Origin" << endl << "3. BattleNet" << endl;
                cin >> select;
                while ((select < 1) || (select > 3)){
                cout << "Digite uma plataforma digital nas opcoes de 1 a 3" << endl;
                cin >> select;
                return select;
}
int main(){
PlataformaDigital *Steam, *Origin, *BattleNet, *Steam2, *Origin2, *BattleNet2;
EmpresaDesenvolvedora *RiotGames, *Valve, *EA;
int n;
unsigned int i;
string nomegen;
unsigned int select;
Steam = new PlataformaDigital();
Origin = new PlataformaDigital();
BattleNet = new PlataformaDigital();
RiotGames = new EmpresaDesenvolvedora();
Valve = new EmpresaDesenvolvedora();
EA = new EmpresaDesenvolvedora();
Steam2 = new PlataformaDigital();
Origin2 = new PlataformaDigital();
BattleNet2 = new PlataformaDigital();
Steam -> setCarteiraDigital (0);
Origin -> setCarteiraDigital (0);
BattleNet -> setCarteiraDigital (0);
Steam2 -> setCarteiraDigital (0);
Origin2 -> setCarteiraDigital (0);
BattleNet2 -> setCarteiraDigital (0);

PlataformaDigital *platj1, *platj2;
Jogo *presente;

do{
    menu();
    //cout << "Creditos Steam: " << cout << Steam -> getCarteiraDigital << endl << "Creditos Origin: " << cout << Origin -> carteiraDigital << endl << "Creditos BattleNet: " << cout << BattleNet -> carteiraDigital << endl;
    cin >> n;
    switch(n){
        case 1:
            int plat;
            cout << "Selecione a plataforma: " << endl << "1. PC" << endl << "2. Console" << endl;
            cin >> plat;
            while ((plat < 1) || (plat > 2))
            cout << "Digite uma plataforma nas opcoes 1 e 2" << endl;
            selecionarEmpresa();
            if (select == 1)
            RiotGames -> criarJogo(plat);
            if (select == 2)
            Valve -> criarJogo(plat);
            if (select == 3)
            EA -> criarJogo(plat);
            Sleep(1000);
            limpatela();
            break;
        case 2:
                int selecionarEmpresa();
                if (select == 1)
                RiotGames -> colocarJogoPromocao();
                else if (select == 2)
                Valve -> colocarJogoPromocao();
                else if (select == 3)
                EA -> colocarJogoPromocao();
            Sleep(1000);
            limpatela();
            break;
        case 3:
                int selecionarEmpresa();
                }
                if (select == 1){
                    if(RiotGames -> jogosDesenvolvidos.size() == 0){
                    cout << "Nao ha jogos desenvolvidos!" << endl;
                    Sleep(1000);
                    limpatela();
                    break;
                    }
                    selecionarPlataformaDig();
                    if(select == 1){
                    cout << "Selecione o jogo que deseja comprar:" << endl;
                    for(i=0; i < RiotGames -> jogosDesenvolvidos.size(); i++){
                    cout << i << " - " << RiotGames -> jogosDesenvolvidos[i] -> getNome() << endl;
                    }
                    cin >> select;
                    if(select < RiotGames -> jogosDesenvolvidos.size()){
                        Steam -> comprarJogo(RiotGames ->jogosDesenvolvidos[select]);
                    }
                    else{
                        cout << endl << "Digite um valor valido!" << endl;
                        }
                    }
                    else if(select == 2){
                    cout << "Selecione o jogo que deseja comprar:" << endl;
                    for(i=0; i < RiotGames -> jogosDesenvolvidos.size(); i++){
                    cout << i << " - " << RiotGames -> jogosDesenvolvidos[i] -> getNome() << endl;
                    }
                    cin >> select;
                    if(select < RiotGames -> jogosDesenvolvidos.size()){
                        Origin -> comprarJogo(RiotGames ->jogosDesenvolvidos[select]);
                    }
                    else{
                        cout << endl << "Digite um valor valido!" << endl;
                        }
                    }
                    else if(select == 3){
                    cout << "Selecione o jogo que deseja comprar:" << endl;
                    for(i=0; i < RiotGames -> jogosDesenvolvidos.size(); i++){
                    cout << i << " - " << RiotGames -> jogosDesenvolvidos[i] -> getNome() << endl;
                    }
                    cin >> select;
                    if(select < RiotGames -> jogosDesenvolvidos.size()){
                        BattleNet -> comprarJogo(RiotGames ->jogosDesenvolvidos[select]);
                    }
                    else{
                        cout << "Digite um valor valido!" << endl;
                        }
                    }
                }
               else if (select == 2){
                    if(Valve -> jogosDesenvolvidos.size() == 0){
                        cout << "Nao ha jogos desenvolvidos!" << endl;
                        Sleep(1000);
                        limpatela();
                        break;
                    }
                    selecionarPlataformaDig();
                    if(select == 1){
                    cout << "Selecione o jogo que deseja comprar:" << endl;
                    for(i=0; i < Valve -> jogosDesenvolvidos.size(); i++){
                    cout << i << " - " << Valve -> jogosDesenvolvidos[i] -> getNome() << endl;
                    }
                    cin >> select;
                    if(select < Valve -> jogosDesenvolvidos.size()){
                        Steam -> comprarJogo(Valve ->jogosDesenvolvidos[select]);
                    }
                    else{
                        cout << endl << "Digite um valor valido!" << endl;
                        }
                    }
                    else if(select == 2){
                    cout << "Selecione o jogo que deseja comprar:" << endl;
                    for(i=0; i < Valve -> jogosDesenvolvidos.size(); i++){
                    cout << i << " - " << Valve -> jogosDesenvolvidos[i] -> getNome() << endl;
                    }
                    cin >> select;
                    if(select < Valve -> jogosDesenvolvidos.size()){
                        Origin -> comprarJogo(Valve ->jogosDesenvolvidos[select]);
                    }
                    else{
                        cout << endl << "Digite um valor valido!" << endl;
                        }
                    }
                    else if(select == 3){
                    cout << "Selecione o jogo que deseja comprar:" << endl;
                    for(i=0; i < Valve -> jogosDesenvolvidos.size(); i++){
                    cout << i << " - " << Valve -> jogosDesenvolvidos[i] -> getNome() << endl;
                    }
                    cin >> select;
                    if(select < Valve -> jogosDesenvolvidos.size()){
                        BattleNet -> comprarJogo(Valve ->jogosDesenvolvidos[select]);
                    }
                    else{
                        cout << endl << "Digite um valor valido!" << endl;
                        }
                    }
                    }
               else if (select == 3){
                    if(EA -> jogosDesenvolvidos.size() == 0){
                        cout << "Nao ha jogos desenvolvidos!" << endl;
                        Sleep(1000);
                        limpatela();
                        break;
                    }
                    selecionarPlataformaDig();
                    if(select == 1){
                    cout << "Selecione o jogo que deseja comprar:" << endl;
                    for(i=0; i < EA -> jogosDesenvolvidos.size(); i++){
                    cout << i << " - " << EA -> jogosDesenvolvidos[i] -> getNome() << endl;
                    }
                    cin >> select;
                    if(select < EA -> jogosDesenvolvidos.size()){
                        Steam -> comprarJogo(EA ->jogosDesenvolvidos[select]);
                    }
                    else{
                        cout << endl << "Digite um valor valido!" << endl;
                        }
                    }
                    else if(select == 2){
                    cout << "Selecione o jogo que deseja comprar:" << endl;
                    for(i=0; i < EA -> jogosDesenvolvidos.size(); i++){
                    cout << i << " - " << EA -> jogosDesenvolvidos[i] -> getNome() << endl;
                    }
                    cin >> select;
                    if(select < EA -> jogosDesenvolvidos.size()){
                        Origin -> comprarJogo(EA ->jogosDesenvolvidos[select]);
                    }
                    else{
                        cout << endl << "Digite um valor valido!" << endl;
                        }
                    }
                    else if(select == 3){
                    cout << "Selecione o jogo que deseja comprar:" << endl;
                    for(i=0; i < EA -> jogosDesenvolvidos.size(); i++){
                    cout << i << " - " << EA -> jogosDesenvolvidos[i] -> getNome() << endl;
                    }
                    cin >> select;
                    if(select < EA -> jogosDesenvolvidos.size()){
                        BattleNet -> comprarJogo(EA ->jogosDesenvolvidos[select]);
                    }
                    else{
                        cout << endl << "Digite um valor valido!" << endl;
                        }
                    }
                    }
            Sleep(1000);
            limpatela();
            break;
        case 4:
            selecionarPlataformaDig();
            if (select == 1){
            cout << endl << "Insira a quantidade de creditos que deseja colocar em sua Carteira Digital: " << endl;
            cin >> select;
            Steam -> adicionarCreditosCarteira(select);
            }
            else if (select == 2){
            cout << endl << "Insira a quantidade de creditos que deseja colocar em sua Carteira Digital: " << endl;
            cin >> select;
            Origin -> adicionarCreditosCarteira(select);
            }
            else if (select == 3){
            cout << endl << "Insira a quantidade de creditos que deseja colocar em sua Carteira Digital: " << endl;
            cin >> select;
            BattleNet -> adicionarCreditosCarteira(select);
            }
            Sleep(1000);
            limpatela();
            break;
        case 5:
            selecionarPlataformaDig();
            if (select == 1)
            Steam -> instalarJogo();
            else if (select == 2)
            Origin -> instalarJogo();
            else if (select == 3)
            BattleNet -> instalarJogo();
            Sleep(1000);
            limpatela();
            break;
        case 6:
            selecionarPlataformaDig();
            if (select == 1)
            Steam -> desinstalarJogo();
            else if (select == 2)
            Origin -> desinstalarJogo();
            else if (select == 3)
            BattleNet -> desinstalarJogo();
            Sleep(1000);
            limpatela();
            break;
        case 7:
            selecionarPlataformaDig();
            if (select == 1)
            Steam -> imprimeJogosCadastrados();
            else if (select == 2)
            Origin -> imprimeJogosCadastrados();
            else if (select == 3)
            BattleNet -> imprimeJogosCadastrados();
            Sleep(1000);
            limpatela();
            break;
        case 8:
            selecionarPlataformaDig();
            if (select == 1)
            Steam -> imprimeJogosInstalados();
            else if (select == 2)
            Origin -> imprimeJogosInstalados();
            else if (select == 3)
            BattleNet -> imprimeJogosInstalados();
            Sleep(1000);
            limpatela();
            break;
        case 9:
            selecionarPlataformaDig();
            cout << "Digite o genero desejado: " << endl;;
            cin >> nomegen;
            if (select == 1)
            Steam -> imprimeJogos(nomegen);
            else if (select == 2)
            Origin -> imprimeJogos(nomegen);
            else if (select == 3)
            BattleNet -> imprimeJogos(nomegen);
            Sleep(1000);
            limpatela();
            break;
        case 10:
            cout << "Digite a plataforma de qual presenteara: " << endl << "1. Steam" << endl << "2. Origin" << endl << "3. BattleNet" << endl;
            cin >> select;
            while ((select < 1) || (select > 3)){
                cout << "Digite uma plataforma nas opcoes de 1 a 3" << endl;
                cin >> select;
            }
            if (select == 1){
                platj1 = Steam;}
            else if (select == 2){
                platj1 = Origin;}
            else{
                platj1 = BattleNet;}
            cout << "Digite a plataforma para qual presenteara: " << endl << "1. Steam" << endl << "2. Origin" << endl << "3. BattleNet" << endl;
            cin >> select;
            while ((select < 1) || (select > 3)){
                cout << "Digite uma plataforma nas opcoes de 1 a 3" << endl;
                cin >> select;
            }
            if (select == 1){
                platj2 = Steam2;}
            else if (select == 2){
                platj2 = Origin2;}
            else{
                platj2 = BattleNet2;}
            cout << "Digite uma empresa nas opcoes de 1 a 3: " << endl << "1. RiotGames" << endl << "2. Valve" << endl<< "3. EA" << endl;
            cin >> select;

            if (select == 1){
                if(RiotGames -> jogosDesenvolvidos.size() == 0){
                    cout << "Nao ha jogos desenvolvidos!" << endl;
                    Sleep(1000);
                    limpatela();
                    break;
                }else{
                    cout << "Selecione o jogo que deseja comprar:" << endl;
                    for(i=0; i < RiotGames -> jogosDesenvolvidos.size(); i++){
                        cout << i << " - " << RiotGames -> jogosDesenvolvidos[i] -> getNome() << endl;
                    }
                    cin >> select;
                    Jogo* escolhido = RiotGames->jogosDesenvolvidos[select];
                    if(platj1 -> getCarteiraDigital() < escolhido->getValorPromocao()){
                        cout << "Voce nao possui creditos suficientes para comprar este jogo!" << endl;
                        Sleep(1000);
                        limpatela();
                        break;
                    }else{
                    presente = escolhido;
                    }
                }
            }else{
                if (select == 2){
                    if(Valve -> jogosDesenvolvidos.size() == 0){
                        cout << "Nao ha jogos desenvolvidos!" << endl;
                        Sleep(1000);
                        limpatela();
                        break;
                    }else{
                    cout << "Selecione o jogo que deseja comprar:" << endl;
                        for(i=0; i < Valve -> jogosDesenvolvidos.size(); i++){
                            cout << i << " - " << Valve -> jogosDesenvolvidos[i] -> getNome() << endl;
                        }
                    cin >> select;
                    Jogo* escolhido = Valve->jogosDesenvolvidos[select];
                        if(platj1 -> getCarteiraDigital() < escolhido->getValorPromocao()){
                            cout << "Voce nao possui creditos suficientes para comprar este jogo!" << endl;
                            Sleep(1000);
                            limpatela();
                            break;
                        }else{
                        presente = escolhido;
                        }
                    }
                }else{
                    if (select == 3){
                        if(EA -> jogosDesenvolvidos.size() == 0){
                            cout << "Nao ha jogos desenvolvidos!" << endl;
                            Sleep(1000);
                            limpatela();
                            break;
                        }else{
                            cout << "Selecione o jogo que deseja comprar:" << endl;
                            for(i=0; i < EA -> jogosDesenvolvidos.size(); i++){
                            cout << i << " - " << EA -> jogosDesenvolvidos[i] -> getNome() << endl;
                            }
                            cin >> select;
                            Jogo* escolhido = EA->jogosDesenvolvidos[select];
                            if(platj1 -> getCarteiraDigital() < escolhido->getValorPromocao()){
                                cout << "Voce nao possui creditos suficientes para comprar este jogo!" << endl;
                                Sleep(1000);
                                limpatela();
                                break;
                            }else{
                            presente = escolhido;
                            }
                        }
                    }
                }
            }


            presenteVirtual(platj1, platj2, presente);
            Sleep(1000);
            limpatela();
            break;
        case 11:
            cout << "Quantidade de jogos cadastrados:" << endl;
            Jogo::imprimeQtdJogos();
            Sleep(1000);
            limpatela();
            break;

        case 12:
            delete RiotGames;
            delete Valve;
            delete EA;
            delete Steam;
            delete Origin;
            delete BattleNet;
            cout << "Saindo..." << endl;
            Sleep(1000);
            break;

        default:
            cout << "Digite somente valores de 1 a 12!" << endl;

            break;
    }
}while(n != 12);
}
