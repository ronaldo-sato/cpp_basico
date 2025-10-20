#include <iostream>
#include "cidadesbrasil.h"

using namespace std;

    cidadesbrasil::cidadesbrasil(int ano=0, int populacao=0){
        this->ano = ano;
        this->populacao = populacao;
    };

    void cidadesbrasil::setano(int ano){
        this->ano = ano;
    };

    void cidadesbrasil::getano(){
        return ano;
    };

    void cidadesbrasil::setpopulacao(int populacao){
        this->populacao = populacao;
    };

    void cidadesbrasil::getpopulacao(){
        return populacao;
    };

    void cidadesbrasil::acrescentapopulacao(int quantidade){
        this->populacao += quantidade;
    };
