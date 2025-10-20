#include <iostream>
#include "cidadesbrasil.h"

using namespace std;

/*
Crie um algoritmo que tenha uma classe chamada cidadesbrasil, nessa classe,
escolha os atributos de cada objeto como população, ano de fundação, entre 
outros.
*/

int main() {

    cidadesbrasil saojose(1767, 727078);

    cout << "Sao Jose dos Campos\n";
    cout << "Ano de Fundação: " << saojose.getano() << endl;
    cout << "População: " << saojose.getpopulacao() << endl;

    cidadesbrasil ubatuba(1637, 97096);
 
    ubatuba.acrescentapopulacao(4);

    cout << "Ubatuba\n"
    cout << "Ano de Fundação: " << ubatuba.getano() << endl;
    cout << "População: " << ubatuba.getpopulacao() << endl;

    system("pause");

    return 0;
}