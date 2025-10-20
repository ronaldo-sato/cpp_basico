/* Aqui é a declação da classe carro */

class carro{

    private:

    int ano;
    float valor, kilometragem;

    public:

    /* Aqui a implementação de cada função ficará separada da declaração da 
    classe.
    
    Apenas copiamos as funções (do public) da classe classes2.cpp, e vamos 
    deixar o tipo e nome da função e argumentos de entrada 
    (parênteses e ponto-e-vírgula)
    */

    // Construtora (eliminamos os parâmetros definidos):
    carro(int ano, float valor, float kilometragem);

    // Funções setters - definir ou alterar informação

    void setAno(int ano);

    void setValor(float valor);

    void setKilometragem(float kilometragem);

    // Funções getters - obter informação

    int getAno();

    float getValor();

    float getKilometragem();

};
