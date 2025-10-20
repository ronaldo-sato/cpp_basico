#include <iostream>

using namespace std;

/*
Usuário informa idade e renda. 

Se ele tem mais que 21 anos e renda abaixo R$1200,00,
pode participar de um programa de moradia.

Informar se ele pode ou não participar.
*/

int main() {
    float renda;
    int idade;

    cout << "Qual sua renda:\n";
    cin >> renda;
    cout << "Qual sua idade:\n";
    cin >> idade;

    if (idade >= 21 && renda < 1200){
        cout << "Voce esta apto a participar do programa!\n";
    } else{
        cout << "Voce nao pode participar do programa!\n";
    }
    return 0;
}