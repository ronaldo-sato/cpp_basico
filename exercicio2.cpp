#include <iostream>

using namespace std;

/*
O usuário informa a nota de 3 provas de um aluno e a média da turma.

Calcular a média do aluno e informar se a nota está acima, igual ou abaixo da
média da turma.
*/

int main() {
    float n1, n2, n3, medTurma;

    cout << "Digite a nota 1:\n";
    cin >> n1;
    cout << "Digite a nota 2:\n";
    cin >> n2;
    cout << "Digite a nota 3:\n";
    cin >> n3;
    cout << "Digite a media da turma:\n";
    cin >> medTurma;

    float medAluno = (n1 + n2 + n3) / 3;

    cout << "A media final do aluno e:" << medAluno << endl;

    if (medAluno > medTurma){
        cout << "A media do aluno esta acima da media da turma!" << endl;
    } else if (medAluno < medTurma){
        cout << "A media do aluno esta abaixo da media da turma!" << endl;
    } else{
        cout << "A media do aluno e igual a media da turma!" << endl;
    }

    return 0;
}