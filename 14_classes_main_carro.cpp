#include <iostream>
#include "carro.h"

using namespace std;


/* Aqui ao invés de implementar de cada função dentro da main, vamos deixar 
a declaração da classe e implementação da classe em arquivos separados, 
repectivamente carro.h e carro.cpp */

int main() {

    carro gol(int 2010, float 25000, float 145000);

    // Imprimindo informações:
    cout << "Carro Gol:\n"
    cout << "Ano: " << gol.getAno() << endl;
    cout << "Kilometragem: " << gol.getKilometragem() << endl;
    cout << "Valor: " << gol.getValor() << endl;    

    system("pause");  /* Apenas para dar tempo de visualizar as informações ao
                      executar o executável. Se rodar direto do prompt de 
                      comando poderíamos omitir isto, já que é impresso na tela 
                      as informações */

    /* Para compilar (chamar o compilar e os dois .cpp):

    g++ classes_main_carro.cpp carro.cpp -o carro.exe

    -o é para nomear a saída, o executável, como carro.exe
    
    se essa opção não for usada, por padrão, o compilador gera a.exe

    */

    return 0;
}