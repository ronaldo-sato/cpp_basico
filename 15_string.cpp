#include <iostream>
#include <string>  // biblioteca padrão para o tipo string

using namespace std;

int main()
{

    /* Um array de caracteres pode ser armazenado da seguinte forma */
    char str1[] = "Hello!";  // array de char automaticamente termina com caractere \0 (nulo)
    char str2[] = {"H", "e", "l", "l", "o", "!", "\0"};

    cout << "Array 1: " << str1 << endl;
    cout << "Array 2: " << str2 << endl;

    char str3[30];
    cout << "Digite seu nome (entrada padrao termina quando encontra espaco em branco):\n";
    cin >> str3;
    cout << "Entrada nome: " << str3 << endl;

    /* Função getline da iostream:

    cin.getline(str, tamanho, delimitador)
    
    lê uma string removendo o delimitador da entrada, até que:

        tamanho-1 seja atingido;
        indicador de fim de arquivo seja inserido;
        caracter delimitador seja encontrado. (opcional)
    */
    char str4[50];
    cout << "Digite seu nome:\n";  // lê até 49 caracteres ou quebra de linha (enter)
    cin.getline(str4, 49);
    cout << "Entrada nome: " << str4 << endl;

    /* string em C++ é um tipo de dado (uma classe) que armazena cadeia 
    de caracteres (texto) */
    string str5 = "Hello";
    string str6 {"World"};

    cout << "String 5: " << str5 << "\n"
         << "String 6: " << str6 << endl;

    cout << "Concatenando strings:\n";
    cout << str5 + str6 << endl;  

    return 0;
}
