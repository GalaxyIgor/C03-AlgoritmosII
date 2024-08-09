#include <iostream>
using namespace std;

// Função para pesquisa sequencial
int pesquisaSequencial(int vetor[], int tamanho, int ValorX) 
{
    bool achou = false;
    int i = 0;
    while (!achou && i < tamanho) {
        achou = vetor[i] == ValorX;
        i++;
    }
    if (achou)
        return i-1;
    else
        return -1;
}

int main() 
{
    int vetor[100];
    int ValorX, i = 0;

    // Leitura dos valores inteiros até encontrar -1
    while (true) 
    {
        int entrada;
        cin >> entrada;
        if (entrada == -1 || i >= 100) 
        {
            break;
        }
        vetor[i++] = entrada;
    }

    // Valor a ser pesquisado no caso X
    cin >> ValorX;

    // ativa a funcao de pesquisa sequencial
    int posicao = pesquisaSequencial(vetor, i, ValorX);

    // Saída
    if (posicao == -1) 
    {
        cout << ValorX << " nao encontrado" << endl;
    } else 
    {
        cout << ValorX << " encontrado na posicao " << posicao + 1 << endl;
    }

    return 0;
}
