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
    cout<<"Digite o n�mero do quarto: ";
    cin>>num_quarto;
    cout<<endl<<"Digite o nome: ";
    getline(cin, nome);
    cout<<endl<<"Digite a idade: ";
    cin>>idade;
    cout<<endl<<"Digite a profiss�o: ";
    getline(cin, profissao);
    cout<<"Digite o valor do aluguel: ";
    cin>>valor_aluguel;
}
void Quarto::dadosMorador()
{
    cout<<"nome: "<<nome<<endl;
    cout<<"idade: "<<idade<<endl;
    cout<<"profiss�o: "<<profissao<<endl;
    cout<<"numero do quarto: "<<num_quarto<<endl;
    cout<<"valor do aluguel: "<<valor_aluguel<<endl;
}
