#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    cout<<"Informe o n�mero de moradores: ";
    int num_moradores;
    cin>>num_moradores;

    Quarto *pensao = new Quarto[num_moradores];

    for(int i=0; i<num_moradores; i++)
    {
        pensao[i]->preencherDados();
    }



    return 0;
}