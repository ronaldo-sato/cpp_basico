#include <iostream>

using namespace std;

/*
Usuário informa a dimensão de uma matriz e os elementos de duas matrizes,
ambas com mesma dimensão, e o algoritmo mostra a soma entre essa duas matrizes
*/

int main() {
    int linhas, colunas;

    cout << "Informe o numero de linhas:\n";
    cin >> linhas;

    cout << "Informe o numero de colunas:\n";
    cin >> colunas;

    float matriz1[linhas][colunas], matriz2[linhas][colunas];

    cout << "Digite abaixo os elementos da matriz 1:\n";

    for (int i=0 ; i<linhas ; i++){
        for (int j=0 ; j<colunas ; j++){
            cout << "Digite o elemento da linha " << i+1 << " e na coluna " << j+1 << endl;
            cin >> matriz1[i][j];
        }
    }

    cout << "Digite abaixo os elementos da matriz 2:\n";

    for (int i=0 ; i<linhas ; i++){
        for (int j=0 ; j<colunas ; j++){
            cout << "Digite o elemento da linha " << i+1 << " e na coluna " << j+1 << endl;
            cin >> matriz2[i][j];
        }
    }

    float soma[linhas][colunas];

    for (int i=0 ; i<linhas ; i++){
        for (int j=0 ; j<colunas ; j++){
            soma[i][j] = matriz1[linhas][colunas] + matriz2[linhas][colunas];
        }
    }

    cout << "Soma das matrizes:\n"
    for (int i=0 ; i<linhas ; i++){
        for (int j=0 ; j<colunas ; j++){
            cout << soma[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}