#include <iostream>

using namespace std;

class carro{
    private:

    int ano;
    float valor, kilometragem;

    public:

    /* Aqui a implementação de cada função ficará separada da declaração da 
    classe.
    
    Apenas copiamos as funções (do public) da classe m classes2.cpp, e vamos 
    deixar o tipo e nome da função, argumentos (parênteses e ponto-e-vírgula)
    */

    // Construtora (eliminamos os parâmetros definidos, se houver eles ficam 
    // somente na implementação):
    carro(int ano, float valor, float kilometragem);

    // Funções setters - definir ou alterar informação

    void setAno(int ano);

    void setValor(float valor);

    void setKilometragem(float kilometragem);

    // Funções getters - obter informação

    int getAno();

    float getValor();

    float getKilometragem();

};

int main() {

    /*
    A implementação das funções da classe carro vamos colocar dentro da main.
    Mas é preciso indicar que essas funções (métodos) se referem à classe carro,
    então, antes do nome da função é preciso informar a classe (nome da classe),
    que a função se refere/pertence, separando com dois pontos duplicados
    a classe do nome da função: 
    */

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

    // Instanciando um 3o objeto passando os argumentos:
    carro hb20(int 2020, float 15000, float 58000);

    // Imprimindo informações:
    cout << "Carro HB20:\n"
    cout << "Ano: " << hb20.getAno() << endl;
    cout << "Kilometragem: " << hb20.getKilometragem() << endl;
    cout << "Valor: " << hb20.getValor() << endl;

    return 0;
}