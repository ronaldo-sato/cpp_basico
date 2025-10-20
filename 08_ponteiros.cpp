#include <iostream>
#include <cstddef>

using namespace std;

/* PONTEIRO é uma variável cujo conteúdo é um endereço de memória, isto é,
ponteiros são variáveis que armazenam um endereço de outra variável ou de 
um espaço na memória, então podemos acessar essa outra variável pelo seu 
identificador ou pelo seu endereço, por um ponteiro.
*/

int main() {

    // Declarar uma variável inteira:
    int var1;

    // Declarando ponteiro - Sintaxe:
    // tipo* nome;
    // onde "tipo" é o tipo de variável que ele irá acessar
    // "*" para indicar que é um ponteiro
    // e "nome" o identificador do ponteiro;
    int* pont1;

    var1=5;

    // Para que o ponteiro armazene o endereço de uma variável, ele 
    // deve receber o "&" (e comercial) da variável:
    pont1 = &var1;  // pont1 armazena o endereço de var1 

    cout << "Valor da variavel atraves do seu nome: " << var1 << endl;

    // Imprimir o endereço da variável:
    cout << "Endereco armazenado no ponteiro: " << pont1 << endl;
    // imprime o endereço do primeiro byte (por isso é preciso informar
    // o tipo do ponteiro, o tipo de dado que ele aponta)

    // Imprimir o valor (da variável) do endereço que o ponteiro aponta:
    cout << "Valor da variavel atraves do ponteiro: " << *pont1 << endl;
    // *pont1 acessar o valor que está no local de memória que o ponteiro aponta

    int var2;
    // Podemos alterar o valor de uma variável:
    // var2 = var1;  // var2 recebe o valor de var1
    // Mas podemos alterar usando o ponteiro:
    var2 = *pont1;   // var2 recebe o valor (de var1) que pont1 aponta
    // quando usamos *ponteiro é a mesma coisa que usar o "nome da variável" 
    // para qual o ponteiro aponta

    cout << var2 << endl;

    // De forma análoga:
    // var1=30;  // alterar o valor de var1 para 30
    // Mesma coisa que: (podemos alterar o valor dessa variável pelo ponteiro
    // que aponta para ela)
    *pont1 = 30;  // aqui estamos atribuindo o valor de 30 ao endereço que pont1 
                  // aponta (var1)
    cout << var1 << endl;

    // Vamos alterar o valor de var2:   
    var2 = 50;
    // Vamos fazer com que pont1 aponte para var2:
    pont1 = &var2;

    // Vamos imprimir *pont1 para verificar se o endereço que ele aponta
    // foi alterado
    cout << *pont1 << endl;  // agora pont1 aponta para var2
    cout << var1 << endl;

    // Vamos criar um novo ponteiro:
    int* pont2;
    // Vamos imprimir o valor:
    cout << pont2 << endl;  // aqui um número estranho foi impresso
    // quando criamos o ponteiro pont2, foi reservado um espaço de memória
    // para onde pont2 aponta, mas já tem um valor nesse espaço, então é uma
    // boa prática inicializar o ponteiro com nulo (apontando para vazio)
    pont2 = NULL;  // nulo faz parte da biblioteca cstddef (precisa fazer o 
                   // include)
    // Como o ponteiro está apontando para vazio, se tentarmos imprimir:
    cout << "Ponteiro vazio" << *pont2 << "?" << endl;  // não imprime nada

    // Ao declarar um ponteiro já podemos pegar o espaço de memória que ele 
    // irá apontar fazendo:
    int* pont3 = new int;  // aqui ao criar o ponteiro um espaço de memória
                           // que cabe um inteiro está sendo reservado, e esse 
                           // espaço será acessado apenas pelo ponteiro (esse 
                           // espaço alocado não tem identificador)
    // Para atribuir um valor a esse espaço:
    *pont3 = 35;
    cout << *pont3 << endl;  // como esse espaço de memória não tem nome
                             // não tem nenhum identificador que faz referência
                             // só podemos acessar o valor pelo ponteiro
    // Porém isso precisa ser feito com cuidado, porque se trocarmos o ponteiro 
    // de local na memória, o antigo espaço ficará perdido, ocorrendo vazamento
    // de memória. Exemplo:

    // Vamos alterar o valor para onde pont3 aponta pelo valor onde pont1 aponta
    *pont3 = *pont1;  // point1 aqui aponta para 50 (var2) e pont3 para 35
    // Então vamos imprimir o valor de pont3:
    cout << "Valor de pont3: " << *pont3 << endl;

    delete pont3;  // para não ocorrer vazamento de memória

    // Mas podemos alterar "o valor" sem usar *:
    pont3 = pont1;  // aqui agora estamos alterando o endereço, portanto,
                    // o endereço que pont3 aponta será o endereço que pont1 
                    // aponta, dessa forma, o espaço de memória que pont3 
                    // apontava (cujo valor é 35) ficou perdido, porque esse
                    // ponteiro havia sido criado com new (como não tem nenhum 
                    // identificador fazendo referência a esse espaço não é mais
                    // possível acessar esse espaço)

    // Assim, tudo que for criado com new, precisa ser desalocado com o comando
    // "delete" para que não ocorra vazamento de memória.

    // Portanto antes de fazer "pont3 = pont1;" precisamos fazer o 
    // "delete pont3;"

    return 0;
}