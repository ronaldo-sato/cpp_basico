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

// Criando uma classe - Sintaxe:

class primeiraClasse{
    // Argumentos privados (acessados apenas dentro da classe):
    private:
    // Argumentos públicos (acessados por outras classe, outras funções):
    public:

    /* Definido uma função cumprimentar para mostrar uma saudação desta
    primeira classe (sem argumentos, vai só imprimir): */
    void cumprimentar(){
        cout << "Minha primeira definicao de classe!\n";
    }

    void aprendendo(){
        cout << "Estou aprendendo C++, e legal usar a memoria!\n";
    }
};  // após o colchete que fecha a classe tem ponto-e-vírgula


int main() {
    
    /* Sempre que chamamos uma classe, um objeto é instanciado.
       Então ao chamar a classe precisamos dar um nome ao objeto que será 
    criado (primeira), e ele será do tipo da classe (primeiraClasse): */
    primeiraClasse primeira;

    // É a partir do objeto que acessamos seus atributos e funções:

    // Comprimentar:

    primeira.comprimentar();

    // Aprendendo:

    primeira.aprendendo();

    return 0;
}