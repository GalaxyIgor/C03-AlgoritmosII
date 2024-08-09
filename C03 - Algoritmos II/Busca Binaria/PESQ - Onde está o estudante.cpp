#include <iostream>
using namespace std;

//funcao para realizar a busca binaria da matricula
int BuscaBiMatricula (int vetor[], int tamanho, int ValorX)
{
    bool achou;
    int baixo, meio, alto;

    baixo = 0;
    alto = tamanho - 1;
    achou = false;

    while ((baixo <= alto) && (achou == false))
    {
        meio = (baixo + alto) /2;
        if(ValorX < vetor[meio])
        {
            alto = meio -1;
        }
        else 
        if (ValorX > vetor[meio])
        {
            baixo = meio + 1;
        }
        else
        {
            achou = true;
        }
    }
    if (achou)
    {
        return meio;
    }
    else 
    {
        return -1;
    }
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
    int corredor = BuscaBiMatricula(VetorMatricula, i, ValorX);

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