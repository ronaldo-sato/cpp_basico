#include <iostream>

using namespace std;

/* Similar a vetores considerando linhas e colunas */

int main() {
    // Declaração de uma matriz:
    int matriz[2][3];  // [linhas][colunas]

    // Atribuição:
    matriz[0][0] = 11;  // 1a linha, 1a coluna
    matriz[0][1] = 12;  // 1a linha, 2a coluna
    matriz[0][2] = 13;  // 1a linha, 3a coluna

    matriz[0][0] = 21;  // 2a linha, 1a coluna
    matriz[0][1] = 22;  // 2a linha, 2a coluna
    matriz[0][2] = 23;  // 2a linha, 3a coluna

    // Para imprimir precisaremos de um for para percorrer as linhas
    // e outro as colunas:
    for (int i=0; i<2 ; i++){
        for (int j=0; j<3 ; j++){
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}