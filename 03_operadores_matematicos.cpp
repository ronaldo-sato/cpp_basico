#include <iostream>

using namespace std;

int main(){

  int a = 5, b = 3;

  // assim como na declaração de uma variável podemos atribuir um valor a
  // ela ou primeiro declarar e depois atribuir, também podemos fazer com 
  // o resultado de uma operação:

  int soma; // declarando
  // adição
  soma = a + b; // atribuindo

  // ou:

  int soma = a + b; // declarando e atribuindo

  cout << "Soma: " << soma << endl;

  // também pode ser calculado já como saída sem atribuir em uma variável
  // (sem gasto de memória)

  cout << "Soma: " << a + b << endl;

  int sub = a - b; // subtração

  cout << "Subtracao: " << sub << endl;

  int mult = a * b; // multiplicação

  cout << "Multiplicacao: " << mult << endl;

  // no caso da divisão, podemos obter quociente, resto ou a divisão exata

  int quodiv = a / b;

  cout << "Quociente da divisao: " << quodiv << endl;

  int restodiv = a % b;

  cout << "Resto da divisao: " << restodiv << endl;

  // para o valor exato da divisão (valor decimal), como a e b são números 
  // inteiros, precisamos convertê-los em float

  float div = (float)a / (float)b;

  cout << "Valor da divisao: " << div << endl;

  // poderíamos implementar outros cálculos, mas existe a biblioteca math.h
  // que tem diversas funções (ver programa math.cpp)

  // Incremento e Decremento

  cout << "valor antes (do incremento): " << a << endl;

  // maneiras de incrementar:
  // a = a + 1;
  // a += 1;
  a++;

  cout << "valor depois (do incremento): " << a << endl;

  a = 5;

  // da mesma forma, decrementar
  
  cout << "a antes: " << a << endl;
  // a = a - 1;
  // a -= 1;
  a--;

  cout << "a depois: " << a << endl;

  return 0;
}
