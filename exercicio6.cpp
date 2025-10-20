#include <iostream>

using namespace std;

/*
Usuário informa gastos com alimentação de 5 famílias,
calcula a média de gastos e informa se cada família gastou
acima ou abaixo da média
*/

int main() {
    float gastos[5];
    cout << "Informe o gastos das 5 famílias:";
    for (int i=0 ; i<5 ; i++){
        cout << "Informa o gasto da " << i+1 << "a familia:\n";
        cin >> gastos[i];
    }

    float media = 0;

    for (int i=0 ; i<5 ; i++){
        media += gastos[i];
    }

    media /= (sizeof(gastos) / sizeof(float));

    cout << "Media de gastos: " << media << endl;

    for (int i=0 ; i<5 ; i++){
        if (gastos[i] > media){
            cout << "O gasto da " << i+1 << "a familia e maior que a media!";
        } else if (gastos[i] == media){
            cout << "O gasto da " << i+1 << "a familia e igual a media!";
        } else{
            cout << "O gasto da " << i+1 << "a familia e menor que a media!";
        }
    }

    return 0;
}