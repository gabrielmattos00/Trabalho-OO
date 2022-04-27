#include <iostream>
#include <string>
#include "Class.h"

using namespace std;

Quarto::Quarto()
{

}

Quarto::~Quarto()
{

}

void Quarto::preencherDados()
{
    cout<<"SALVE"<<endl;
    cout<<"Digite o numero do quarto: ";
    cin>>num_quarto;
    cout<<"Digite o nome: ";
    cin.ignore();//lia o quebra linha como nome.
    getline(cin, nome);
    cout<<"Digite a idade: ";
    cin>>idade;
    cout<<"Digite a profiss�o: ";
    cin.ignore();
    getline(cin, profissao);
    if(profissao=="estudante" || profissao=="Estudante")
    {
        cout<<"Informe o seu curso: ";
        //cin.ignore();
        getline(cin, curso);
    }
    cout<<"Digite o valor do aluguel: ";
    cin>>valor_aluguel;
}
void Quarto::dadosMorador()
{
    cout<<endl<<"nome: "<<nome<<endl;
    cout<<"idade: "<<idade<<endl;
    cout<<"profissao: "<<profissao;
    if(profissao=="estudante" || profissao=="Estudante")
    {
        cout<<" de "<<curso;
    }
    cout<<endl<<"numero do quarto: "<<num_quarto<<endl;
    cout<<"valor do aluguel: "<<valor_aluguel<<endl;
}
