#include "Class.h"
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    cout<<"Bem vindo ao c�digo";
    cout<<"Informe o n�mero de moradores: ";
    int num_moradores;
    cin>>num_moradores;

    Quarto *pensao = new Quarto[num_moradores];

    for(int i=0; i<num_moradores; i++)
    {
        pensao[i].preencherDados();
    }
    for(int i=0; i<num_moradores; i++)
    {
        pensao[i].dadosMorador();
    }

    return 0;
}
