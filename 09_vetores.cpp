#include <iostream>

using namespace std;

/* VETORES
Vetor é uma sequência de dados do mesmo tipo. 
Dessa forma, precisamos declarar o tipo de elementos que estarão nesse vetor.

*/

int main() {

    /* ALOCAÇÃO ESTÁTICA - ao declarar o vetor informamos o tamanho do vetor, 
    então quando o programa é compilado é reservado esse espaço na memória */

    // Declarando um vetor para inteiros:
    int vet[4];  // a posição inicia em zero, portanto índices vão de 0-3
                 // ao tentar acessar o elemento 4 (isso poderia ser feito, 
                 // embora o vetor declarado vai até a posição 3), pode haver
                 // um valor que está na sequência (na memória), porém que não
                 // faz sentido
    // Atribuição:
    vet[0] = 5;   // primeiro elemento é a posição zero
    vet[1] = 10;

    // Imprimir posição zero do vetor:
    cout << vet[0] << endl;  // imprime 5
    // Imprimir a posição [3], que ainda não atribuímos nada:
    count << vet[3] << endl;  // imprime um valor estranho que está nessa 
                              // posição da memória

    // Podemos declarar atribuindo valores (uso de chaves):
    int vet2[4] = {5, 10};  // atribuindo na declaração dessa forma, o primeiro 
                            // elemento (5) vai ocupar a posição zero, o 10 
                            // ocupa a posição 1, e assim por diante. Os 
                            // elementos seguintes são preenchidos com zero.
    cout << "Valores de vet2: \n";
    cout << vet2[0] << endl;  // imprime 5
    cout << vet2[1] << endl;  // imprime 10
    cout << vet2[2] << endl;  // imprime zero
    cout << vet2[3] << endl;  // imprime zero

    // É possível declarar atribuindo sem especificar o tamanho:
    int vet2[] = {5, 10};  // porém o vetor terá apenas 2 elementos; o que ele 
                           // faz é colocar o 5 na posição zero, e o 10 na 1a.
    cout << "Valores de vet2 sem especificar o tamanho: \n";
    cout << vet2[0] << endl;  // imprime 5
    cout << vet2[1] << endl;  // imprime 10
    cout << vet2[2] << endl;  // imprime um valor estranho

    // Vamos redefinir vet:
    vet[4] = {5, 10};

    // Para imprimir uma sequência podemos usar o laço for:
    cout << "[";  // mostrar números do vetor entre os colchetes
    for (int i=0 ; i<4 ; i++){
        cout << vet[i] << " ";
    }
    cout << "]" << endl;

    // Função sizeof: retorna o tamanho do vetor (em número de bytes)
    int x = sizeof(vet);  // tamanho do vetor x em bytes
    // Imprimir x:
    cout << x << endl;  // vet é um vetor de inteiros, cada inteiro ocupa 
                        // 4 bytes, como são 4 elementos, então o vetor ocupa
                        // 16 bytes

    // Verificando o tamnho de inteiro:
    int y = sizeof(int);
    cout << "Tamanho de inteiro: " << y << endl;

    // Então para obter a quantidade de elementos:
    int n = sizeof(vet) / sizeof(int);  // tamanho vetor em bytes / tamanho do tipo
    cout << "Quantidade de elementos do vetor: " << n << endl;

    /* ALOCAÇÃO DINÂMICA - o tamanho do vetor é definido em tempo de execução, 
    ou seja, a reserva de memória é feita em tempo de processamento. Então, 
    enquanto o programa é executado a memória vai sendo alocada dinamicamente,
    conforme a necessidade
    */

    // Tamanho do vetor definido pelo uruário:
    int tamanho;
    cout << "Digite o tamanho do vetor: \n";
    cin >> tamanho;
    // Alocar vetor dinamicamente é parecido com ponteiro:
    int* vetor = new int[tamanho];  // vetor é o nome de um ponteiro que 
                                    // aponta para um vetor. Então aqui, estamos
                                    // declarando o ponteiro e alocando espaço 
                                    // na memória para um vetor com tamanho 
                                    // informado pelo usuário

    // Poderíamos atribuir valor da mesma forma usando os índices, por exemplo:
    // vetor[0] = 5;

    // Mas caso a atribuição também seja feita dinamicamente pelo usuário,
    // podemos usar um for:
    for (int i=0 ; i<tamanho; i++){
        cout << "Digite o elemento " << i+1 << " do vetor:\n";
        cin >> vetor[i];
    }

    // Vamos imprimir o vetor:
    cout << "[";
    for (int i=0 ; i<tamanho; i++){
        cout << vetor[i] << " ";
    }
    cout << "]" << endl;

    // Para desalocar a memória, usamos o comando delete, mas no caso como é 
    // um vetor é preciso indicar com os colchetes:
    delete [] vetor;

    return 0;
}