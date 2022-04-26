#ifndef CLASS_H_INCLUDED
#define CLASS_H_INCLUDED

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

};

#endif // CLASS_H_INCLUDED
