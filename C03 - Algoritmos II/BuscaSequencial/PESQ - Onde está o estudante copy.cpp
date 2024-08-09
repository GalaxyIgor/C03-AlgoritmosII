#include <iostream>
using namespace std;

//funcao para realizar a busca binaria da matricula
int BuscaSeqMatricula (int vetor[], int tamanho, int ValorX)
{
    bool achou = false;
    int i = 0;
    while (!achou && i < tamanho)
        achou = vetor[i++] == ValorX;
    if(achou)
        return (i-1);
    else    
        return -1;
}

//funcao principal
int main()
{
    int i = 0, Alunos, VetorMatricula[10000], ValorX;


    //primeira linha
    cin >> Alunos;

    //segunda linha
    for(i = 0; i < Alunos; i++)
    {
        cin >> VetorMatricula[i];
    }

    //terceira linha
    cin >> ValorX;

    //verifica a matricula
    int corredor = BuscaSeqMatricula(VetorMatricula, i, ValorX);

    //saida
    if(corredor == -1)
    {
        cout << "Nao localizado" << endl;
    }
    else
    {
        cout << "Corredor " << corredor << endl;
    }

    return 0;
}