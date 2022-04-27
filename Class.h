#ifndef CLASS_H_INCLUDED
#define CLASS_H_INCLUDED
#include <string>

using namespace std;

class Quarto
{

    private:
        string nome;
        int idade;
        string profissao;
        int num_quarto;
        float valor_aluguel;

    public:
        Quarto();
        ~Quarto();
        void preencherDados();
        void dadosMorador();
};

#endif // CLASS_H_INCLUDED
