#include <iostream>

using namespace std;

/*
Dada uma função f(x) = x^2 - 3x + 5

Calcule f(a) em que a é um número informado pelo usuário
*/

// Definindo f(x)
float f(float x){
    float valor;
    valor = x*x - 3*x + 5;
    return valor;
}


int main() {
    float a;

    cout << "Digite uma numero real\n";
    cin >> a;

    float valorf = f(a);

    cout << "O valor da funcao no ponto " << a << "e igual a " << valorf << endl;

    return 0;
}