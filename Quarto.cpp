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
    //cout<<"Digite o nome: "<<endl;
    //getline(cin,nome);
    cout<<"Digite a idade: "<<endl;
    cin>>idade;
    //cout<<"Digite a profiss�o: "<<endl;
    //getline(cin,profissao);
    cout<<"Digite o n�mero do quarto: "<<endl;
    cin>>num_quarto;
    cout<<"Digite o valor do aluguel: "<<endl;
    cin>>valor_aluguel;
}
void Quarto::dadosMorador()
{
    //cout<<"nome: "<<nome<<endl;
    cout<<"idade: "<<idade<<endl;
    //cout<<"profiss�o: "<<profissao<<endl;
    cout<<"numero do quarto: "<<num_quarto<<endl;
    cout<<"valor do aluguel: "<<valor_aluguel<<endl;
}
