#include <iostream>

using namespace std;

/*
Usuário informa o tamanho do vetor e seus elementos.
O algoritmo deve imprimir esse vetor e logo após perguntar ao usuário
se ele quer imprimir outro vetor. 

Utilizar delete após a impressão do vetor.
*/

int main() {
    
    int tamanho, continua;

    do {
        cout << "Digite o tamanho do vetor:\n";
        cin >> tamanho;

        float* vetor = new float[tamanho];

        for (int i=0 ; i<tamanho ; i++){
            cout << "Digite o elemento " << i+1 << "do vetor:\n";
            cin >> vetor[i];
        }
        
        cout << "O vetor inserido e:\n[ ";
        for (int i=0 ; i<tamanho ; i++){
            cout << vetor[i] << " ";
        }
        cout << " ]\n";

        cout << "Para inserir outro vetor digite 1, senao, digite 0";
        cin >> continua;
        
        delete [] vetor;
    }
    while (continua)

    return 0;
}