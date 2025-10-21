#include <iostream>

// em c++ "barra-barra" é comentário (não tem nenhum efeito no comportamento
// do programa). Para comentários multilinhas, pode ser usado o delimitador:

/* comentário
   multilinhas 
   (bloco de comentário) */ 

/*
  A diretiva que começa com #, instrui ao pré-processador para incluir código
  no código-fonte. Antes de um código-fonte ser compilado ele é pré-processado,
  ele é interpretado, fazendo a inclusão no cabeçalho o que for indicado.

  include inclui bibliotecas (para se usar determinada função, precisamos 
  incluir sua respectiva biblioteca)

  outra definição de pré-processamento é a diretiva 
  
    #define identifier replacement // não tem ; ao final

  esse diretiva define que determinado identificador (identifier) vai ser 
  substituído pelo valor replacement em todo ocorrência de identifer no programa
*/

// a biblioteca iostream é quase sempre usada, porque trabalha com entrada e 
// saída de dados

// função main é o corpo do código principal (função principal), 
// e ela sempre retorna um inteiro
int main(){ 
  // em c++ o bloco de código é delimitado por chaves, se não tiver chaves, 
  // somente a linha seguinte (linha posterior à definição da função), 
  // pertence ao escopo da função

  // std::cout chama a função padrão de saída da biblioteca iostream (tela do 
  // computador)
  // << são direcionadores, que vai concatenando da direita para a esquerda,
  // para a saída padrão
  // endl é uma quebra de linha
  std::cout << "Hello C++!" << std::endl;
  // ao final de um comando sempre precisa de ponto-e-vírgula ;
  // \n também é uma quebra de linha, usada dentro e ao final de string
  std::cout << "Aprendendo C++!\n" << std::endl;

  return 0; // retorno da função
}   