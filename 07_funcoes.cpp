#include <iostream>

using namespace std;

int y; // definindo y como função global, quando declaramos antes / fora de 
// todas as funções

// podemos também definir uma variável cujo valor fica fixado, por exemplo,
// se quisermos definir um valor para pi, poderíamos fazer usando define:

#define pi 3.1415; // definindo pi como variável imutável

// também podemos usar define para definir determinada tarefa, que se repete, 
// por exemplo, se fóssemos imprimir algo diversas vezes:
#define aprendendo cout << "Aprendendo C++!\n"; // toda vez que chamarmos 
// aprendendo; será exibido a string

// Funções:
// separar trechos de código em funções é importante para reutilização,
// evitando que escrevamos o mesmo código repetidamente

// para definir uma função, declaramos o tipo da função conforme seu retorno,
// entre parênteses definimos os argumentos (as entradas, tipo e nome das 
// variáveis - separadas entre vígula), e entre chaves os comandos que serão 
// executados (escopo da função), com o retorno da função por último

// uma função que não retorna nada, é do tipo void
// por exemplo uma função que só imprime algo:

void estudando(){
  cout << "Funções em C++!" << endl
}

int somar(int a, int b){
  // função somar: recebe dois interios (a e b), e realiza a soma desses 
  // valores, guardando o resultado na variável local soma. 
  // variáveis locais existem enquanto a função estiver ativa (em execução)
  // quando a função retorna o valor, as variáveis locais deixam de existir
  int soma;
  soma = a + b;
  return soma;
}

int somar2(int a, int b){
  // realiza a mesma operação que a função somar
  // porém aqui criamos uma variável local, com mesmo nome que outra dentro 
  // da função principal, mas com valores diferentes para verificar que 
  // elas tem escopos diferentes
  int soma;
  int x = 1;
  cout << "Valor de x dentro da função somar2: " << x << endl;
  soma = a + b;
  return soma;
}

int somar3(int &a, int &b){
  // realiza a mesma operação que a função somar2
  // porém aqui recebemos as variáveis a e b por referência, isto é,
  // 
  int soma;
  cout << "Valor de a e b antes: " << x << endl;
  soma = a + b;
  // alterando os valores de a e b
  a *= 10;
  b *= 2;
  return soma;
}

int somar4(int a, int b){
  // realiza a mesma operação que a função somar
  // porém aqui criamos uma variável local, com mesmo nome que outra dentro 
  // da função principal, mas com valores diferentes para verificar que 
  // elas tem escopos diferentes
  int soma;
  y = 1;
  cout << "Valor de y dentro da função somar4: " << y << endl;
  soma = a + b;
  return soma;
}


int main(){

  estudando();

  int a = 5, b = 3;

  int soma; // declarando uma variável soma dentro da função principal (main),
  // isto é, o escopo dela é dentro da função main 

  // então aqui na main, a variável soma recebe o valor retornado da função 
  //somar, embora o mesmo valor da variável soma seja igual aqui na main e 
  // na função somar, elas são variáveis diferentes
  soma = somar(a, b);

  cout << "Valor da soma: " << soma << endl;

  // variáveis locais e globais

  int x = 0;

  cout << "Valor de x dentro da main: " << x << endl;

  soma = somar2(a, b);

  cout << "Valor de x após alterar o valor em somar2: " << x << endl;

  // as variáveis x são variáveis locais tanto na main como na soma2,
  // ou seja, elas são variáveis diferentes dentro do seu escopo 
  // (a variável x na main é diferente da variável x na somar2),
  // embora tenham o mesmo nome, por isso, o valor de x após ser alterado
  // dentro de somar2, volta a ser o valor definido na main

  // se esse valor deve manter a alteração na main, após a chamada da função,
  // devemos passar por referência a variável, isto é, passamos a variável 
  // antecedida por &, ou seja, passamos o local de 

  cout << "Valor de a e b após alterar em somar3: " << a << b << endl;

  // para declarar uma variável global, que será a mesma para todas as 
  // funções que a utilizar, precisamos declarar essa variável antes da
  // definição das funções

  // então vamos definir uma variável global y, e usar uma função somar4, 
  // a mesma que somar2, exceto que altera o valor de y dentro da função

  y = 0; // como foi declarada como variável global, declarada antes das 
  // funções, onde for usado variável y está usando essa mesma variável

  cout << "Valor de y dentro da main (antes de somar4): " << y << endl;
  // imprime 0

  soma = somar4(a, b); // imprime 1

  cout << "Valor de y dentro da main (depois de somar4): " << y << endl;
  // imprime 1

  cout << "Valor de pi definido por define: " << pi << endl;

  // se quiséssemos redefinir o valor de pi, isso geraria erro:
  // pi = 3.14;

  // função definida por define:
  aprendendo;

  return 0;
}