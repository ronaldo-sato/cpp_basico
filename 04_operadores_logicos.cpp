#include <iostream>

using namespace std;

int main(){

  float nota1, nota2;

  cout << "Informa a nota 1: " << endl;
  cin >> nota1;

  cout << "Informa a nota 2: " << endl;
  cin >> nota2;

  float media = (nota1 + nota2) / 2;

  cout << "Media: " << media << endl;

  /*
  Comparações:

  Igualdade: ==

  Diferente: !=

  Menor e menor igual: < e <=

  Maior e maior igual: > e >=
  */

  /*
  Suponha notas em intervalos:
  
  D: [0, 2.5[
  C: [2.5, 5.0[
  B: [5.0, 7.5[
  A: [7.5, 10]
  
  if-else if-else
  */
  if (media < 2.5){
      cout << "Nota Final D\n";
  } else if (media < 5){ // só passa para este else se não entrou no if (>= 2.5)
      cout << "Nota Final C\n";
  } else if (media < 7.5){ // só passa para este else se >= 5
      cout << "Nota Final B\n";
  } else { // se não satisfaz nenhuma anterior é >= 7.5
      cout << "Nota Final A\n"
  }

  /*
  Operadores Lógicos:

  Duas condições satisfeitas (e): && 

  Pelo menos 1 condição satisfeita (ou): ||

  Negar uma condição (não): !
  */

  /*
  Suponha além das notas, o aluno precisa ter uma frequência mínima de 75%
  para ser aprovado:
  */
  float freq;
  cout << "Qual a frequencia do aluno?\n";
  cin >> freq;

  /* Usando && */
  if (media >= 5 && freq >= 75){
      cout << "Aluno Aprovado!\n";
  } else{
      cout << "Aluno Reprovado!\n";
  }

  /* Usando || */
  if (media < 5 || freq < 75){
      cout << "Aluno Aprovado!\n";
  } else{
      cout << "Aluno Reprovado!\n";
  }

  /* Operador Ternário */
  (media >= 5) ? cout << "Aluno Aprovado!\n" : cout << "Aluno Reprovado!";

  return 0;
}