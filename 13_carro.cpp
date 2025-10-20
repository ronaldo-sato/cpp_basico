#include <iostream>

#include "13_carro.h"  /* ao chamar uma biblioteca que criamos fazemos isso
                          entre aspas duplas */

using namespace std;

    /* Aqui é a implementação do classe carro, por isso chamamos a declaração 
    da classe antes com o include. */

    // Contrutora
    carro::carro(int ano=0, float valor=-1, float kilometragem=-1){
        this->ano = ano;
        this->valor = valor;
        this->kilometragem = kilometragem;
    }

    void carro::setAno(int ano){
        this->ano = ano;  
    }

    void carro::setValor(float valor){
        this->valor = valor;
    }

    void carro::setKilometragem(float kilometragem){
        this->kilometragem = kilometragem;
    }

    int carro::getAno(){
        return this->ano;
    }

    float carro::getValor(){
        return this->valor;
    }

    float carro::getKilometragem(){
        return this->kilometragem;
    }
