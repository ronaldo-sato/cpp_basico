#include <iostream>

using namespace std;

/*
Usuário informa um número real b e um número natural e.

Calcular a potência b^e. (na mão, se usar biblioteca matemática!)

Ao informar o valor calculado, perguntar se quer
calcular outra potência. -> while - break
*/

// Definindo a função potencia
float potencia(float x, int y){
    float pot=1;
    int count=1;
    while (count <= y){  // passa y vezes no laço (então para 10^2 = 100)
        pot *= x;        // pot=1   -> pot=10  -> pot=100 -> para
        count++;         // count=1 -> count=2 -> count=3 -> count=4
    }
    return pot;
}

int main() {
    float b;
    int e;
    int q;

    while (1){
        cout << "Digite um valor real para a base:\n";
        cin >> b;
        cout << "Digite um valor natural para o expoente:\n";
        cin >> e;
        float valorpot = potencia(b, e);
        cout << "O valor de " << b << " elevado a " << e << " e igual a " << valorpot << endl;
        cout << "Digite 1 para calcular outra potencia ou 0 para parar:\n"
        cin >> q;
        if (q == 0){
            break
        }
    }

    return 0;
}