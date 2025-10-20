#include <iostream>

using namespace std;

int main(){

  /*
  comando while (enquanto): enquanto condição for verdadeira repete os comandos

  while (condicao){
    comandos
  }

  comando do while (faça enquanto): executa uma primeira vez os comandos, depois 
  verifica a condição e se verdadeira repete os comandos enquanto for verdadeiro

  do {
    comandos
  } while(condicao)

  comando for (faça): executa os comandos, iniciando com determinado valor 
  (início), por um número determinado de vezes até a condição de parada (final)
  onde o controle se dá por um contador (passo)

  for (início; final; passo){
    comandos
  }
  */

  /* Realizar a soma de n números inteiros passados pelo usuário */

  int n;
  cout << "Diga um numero inteiro nao negativo:\n";
  cin >> n;

  // int soma = 0;
  // int cont = 1;

  // while (cont <= n){
  //   soma += cont;
  //   cont++;
  // }
  
  // comando break: parar uma estrutura de repetição

  // int soma = 0;
  // int cont = 0;

  // do {
  //   soma += cont;
  //   cont++;
  // } while(cont <= n)

  int soma = 0;

  // for (int i=1 ; i<=n ; i++){
  //   soma += i;
  // }
  
  for (int i=1 ; i<=n ; i++) // teste colocar e tirar as chaves do for
    soma += i; // sem chaves apenas esta linha pertence ao for
    cout << 'teste do valor da soma' << soma << endl;
    // no for sem chaves, apenas a primeira linha depois do for faz parte do
    // escopo dele. Sem chaves a impressão de teste só imprime o resultado 
    // final, ao contrário do uso com chaves, essa impressão faz parte do laço,
    // sendo impresso o valor de soma a cada iteração

  cout << "A soma dos numeros de 0 ate " << n << " = " << soma << endl;
  
  /* OBS: o i declarado dentro do for só pode ser usado dentro do for, 
  caso queira usar fora do for, é preciso ter declarado i globalmente no
  programa. Nesse caso, o for não precisaria declarar o tipo do ji
  
  int i;  // delacaração global no programa
  
  for (i=1; i<=n ; i++){
    soma += i;
  }

  */

  return 0;
}