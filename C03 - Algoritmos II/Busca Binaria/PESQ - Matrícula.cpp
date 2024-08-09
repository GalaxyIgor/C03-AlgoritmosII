#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//struct para armazenar os dado dos aluno
struct Aluno 
{
	string nome;
	int matricula;
    string curso;
};

//funcao para buscar por nome
int buscarPorNome(Aluno a[], int N, string NomeBusca) 
{
	for (int i = 0; i < N; i++) 
	{
		if (a[i].nome == NomeBusca) 
		{
			return i;
		}
	}
	return -1;
}

//funcao principal
int main ()
{
    Aluno a[10000];
	int i = 0;
    int N;
    string NomeBusca;
    
    //primeira linha irá conter um único número inteiro N
    cin >> N;

    //limpar buffer para getline
    cin.ignore();

    //entrada dos dados dos alunos
    for(i = 0; i < N; i++)
    {
        getline(cin, a[i].nome); // Troca do operador >> por getline
        getline(cin, a[i].curso);
        cin >> a[i].matricula;
        cin.ignore(); //limpar buffer para getline
    }

    //entrada do nome a ser buscado
    getline(cin, NomeBusca); // Troca do operador >> por getline

    //linha 3
    cin >> NomeBusca;
    int posicao = buscarPorNome(a, N, NomeBusca);


    //saida
		if (posicao == -1) 
		{
			cout << "Aluno nao localizado" << endl;
        }
        else
        {
            cout << a[posicao].nome << endl;
            cout << a[posicao].curso << endl;
            cout << a[posicao].matricula << endl;
        }
	return 0;
}
