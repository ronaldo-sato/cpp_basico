#include <iostream>

using namespace std;

/* CLASSES
Classes são construtores de objetos, que terão características e que poderão
realizar ações conforme a definição de sua classe.

Classes podem ser usadas como uma biblioteca, uma coleção de funções que é 
colocada dentro de uma classe para facilitar. 

Aqui apenas veremos a implementação de uma classe. A conceituação será 
vista em Estrutura de Dados.
*/

// Criando uma classe carro:

class carro{

    private:

    int ano;
    float valor, kilometragem;

    public:

    /* Função Construtora (tem o mesmo nome que a classe):
       Dessa forma, automaticamente ao instanciar um objeto, se os parâmetros,
    não forem passados, o objeto é criado com os parâmetros já definidos: */
    carro(int ano=0, float valor=-1, float kilometragem=-1){
        this->ano = ano;
        this->valor = valor;
        this->kilometragem = kilometragem;
    }

    // Funções setters - definir ou alterar informação

    void setAno(int ano){  // argumento com mesmo nome que atributo da classe
        // portanto, para indicar a variável da classe usamos this->
        this->ano = ano;  /* atribundo o ano recebido na função no atributo ano
                          da classe. Se o argumento da função tivesse outro 
                          nome (por exemplo, a), diferente ao da classe, 
                          poderia ser feito uma atribuição direta: */
        // ano = a;  
    }

    void setValor(float valor){
        this->valor = valor;
    }

    void setKilometragem(float kilometragem){
        this->kilometragem = kilometragem;
    }

    // Funções getters - obter informação

    int getAno(){
        return this->ano;
    }

    float getValor(){
        return this->valor;
    }

    float getKilometragem(){
        return this->kilometragem;
    }
};


int main() {

    // Usando a classe carro:
    carro gol;

    // Definindo o ano:
    gol.setAno(int 2010);
    gol.setValor(float 25000);
    gol.setKilometragem(float 145000);

    // Imprimindo informações:
    cout << "Carro Gol:\n"
    cout << "Ano: " << gol.getAno() << endl;
    cout << "Kilometragem: " << gol.getKilometragem() << endl;
    cout << "Valor: " << gol.getValor() << endl;

    // Instanciando um 2o objeto sem passar argumentos para teste:
    carro teste();

    // Imprimindo informações:
    cout << "Teste:\n";
    cout << "Ano: " << teste.getAno() << endl;
    cout << "Kilometragem: " << teste.getKilometragem() << endl;
    cout << "Valor: " << teste.getValor() << endl;

    // Instanciando um 3o objeto passando os argumentos:
    carro hb20(int 2020, float 15000, float 58000);

    // Podemos alterar valor:

    hb20.setKilometragem(float 62000);

    cout << "Carro HB20:\n"
    cout << "Ano: " << hb20.getAno() << endl;
    cout << "Kilometragem: " << hb20.getKilometragem() << endl;
    cout << "Valor: " << hb20.getValor() << endl;

    return 0;
}