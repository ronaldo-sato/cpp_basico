#include <iostream>

// Principais tipos de variáveis:

// bool: booleano; em geral utiliza 1 byte da memória para True (1) ou False (0)

// char: caractere; e,m geral utiliza 1 byte da memória para armazenar um 
// caractere; (string armazena cadeia de caracteres, mas usando estrutura de 
// vetores é possível armazenar uma cadeia de caracteres com char também)

// int: inteiro; em geral utiliza 4 bytes de memória para armazenar números 
// inteiros (de -2.147.483.648 a 2.147.483.647)

// float: ponto flutuante; em geral utiliza 4 bytes para armazenar números reais
// com menos de 6 casas decimais (de -1.2e-38 a 3.4e38)

// double: ponto flutuante duplo; em geral utiliza 8 bytes para armazenar 
// números reais com menos de 15 casas decimais (de -2.2e-308 a 1.79e308); 
// portanto, para não gastar memória, se for trabalhar com números reais 
// pequenos, o ideal é usar float (senão estará gastando o dobro de memória)

// para não precisar escrever o prefixo std:: sempre que usar funções padrão:
using namespace std; 

/* Todos os elementos da bilioteca padrão são declarados no que é chamado de 
namespace dando visibilidade aos seus componentes no programa, dessa forma, 
podemos usar esses elementos sem a declaração explícita */

int main(){

  // em c++ é necessário declarar variáveis:
  // para declarar colocamos o tipo da variável e o nome

  int inteiro; // declarando uma variável chamada inteiro cujo tipo é int

  // se na declaração não for atribuído algum valor, em algum momento antes 
  // do uso dessa variável, ela precisa receber algum valor:

  inteiro = 5;
  
  cout << "Variavel: inteiro=" << inteiro << endl;

  // podemos declarar já atribuindo um valor:

  int inteiro = 10;

  cout << "Variavel: inteiro=" << inteiro << endl;

  // ao atribuir um número decimal a uma variável inteira, como armazena um 
  // inteiro, armazena só a parte inteira

  int inteiroF = 5.1; // tentando armazenar um float numa variável tipo int

  cout << "Variavel: inteiroF=" << inteiroF << endl; // imprime a parte inteira

  float real = 1.5;

  cout << "Variavel: real=" << real << endl; // imprime as casas decimais

  float real = 1.5e99 // real grande

  cout << "Variavel: real=" << real << endl; // não imprime, imprime "inf" de 
  // infinito, porque agora real recebeu um valor maior que o float pode 
  // representar

  double realG = 1.5e99;

  cout << "Variavel: realG=" << realG << endl; // imprime real grande

  double realXG = 1.5e309;

  cout << "Variavel: realG=" << realG << endl; // também imprime "inf", já que
  // o valor atribuído é maior que o tipo pode armazenar

  bool booleano = true;

  cout << "Variavel: booleano=" << boobleano << endl; // verdadeiro = 1

  cout << "Valor: false=", false << endl; // false = 0
  
  // para CARACTERE utiliza-se ASPAS SIMPLES

  char letra;
  letra = 'a';

  cout << "Variavel: letra=" << letra << endl;

  letra = 'aeiou'; // como char armazena uma letra, nessa atribuição a 
  // variável letra recebe 'a', depois recebe 'e', assim por diante, até 
  // receber 'u' por último, valor que fica armazenado

  cout << "Variavel: letra=" << letra << endl; // imprime a última letra

  // para trabalhar com uma cadeia de caracteres, podemos informar o tamanho
  // armazenando mais do que uma letra:

  char cadeia[5] = 'aeiou';

  cout << "Variavel: cadeia[5]=" << cadeia << endl; // imprime a sequência

  // isso vetorizando a variável, o normal com uma sequência de caracteres 
  // é usar variável tipo string

  string palavra;

  // para STRING utiliza-se ASPAS DUPLAS

  palavra = "aeiou";

  cout << "Variavel: palavra=" << palavra << endl; // 

  // Iteração com usuário
  // Para receber dado de entrada do usuário, por exemplo, pedir a idade dele:

  int idade;

  cout << "Qual sua idade?" << endl;

  // O dado de entrada fornecido pelo usuário precisa ser atribuída à 
  // respectiva variável (idade):

  cin >> idade;

  cout << "Usuario digitou: " << idade << endl;

  return 0;
}
