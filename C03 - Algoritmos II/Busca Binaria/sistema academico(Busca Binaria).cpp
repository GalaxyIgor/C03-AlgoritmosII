#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//struct para armazenar os dado dos aluno
struct Aluno 
{
	string nome; //1
	float nota; //1
	int matricula; //1
};//3

//funcao para buscar matricula
int buscarPorMatriculaBinaria(Aluno alunos[], int tamanho, int matricula) 
{
    bool encontrou = false;//1n
    int baixo, meio, alto;//3

    baixo = 0;//1
    alto = tamanho - 1;//2n

    while ((baixo <= alto) && (encontrou == false)) //10n
	{
        meio = (baixo + alto) / 2; //3n

        if (alunos[meio].matricula == matricula)  //4n
		{
            encontrou = true; //
        } else if (alunos[meio].matricula < matricula) //4n
		{
            baixo = meio + 1; //3n
        } else 
		{
            alto = meio - 1; //3n
        }
    }

    if (encontrou)
        return meio; //1
    else
        return -1; //0
}//4 + 26n

//funcao para buscar por nome
int buscarPorNome(Aluno a[], int n, string nome) 
{
	for (int i = 0; i < n; i++) //4 + 6n
	{
		if (a[i].nome == nome) //4n
		{
			return i;//0
		}
	}
	return -1;//0
} //4 + 10n

//funcao para contar Notas Maiores
int contarNotasMaiores(Aluno a[], int n, float nota) 
{
	int quantidade = 0;
	for (int i = 0; i < n; i++) //4 + 6n
	{
		if (a[i].nota >= nota) //4n
		{
			quantidade++; //3n
		}
	}
	return quantidade; //1
} //5 + 13n

//funcao main
int main ()
{
	// declara opcao
	int opcao;
	// declara o contador
	int i = 0;
	// declara a matricula
	int matricula;
	// declara a quantidade de notas superiores a escolhida
	int quantidade;
	// declara a quantidade de alunos
	int quantidaDeAlunos;
	// entra na struct
	Aluno a[11];
	// string para escrver o nome
	string nome;
	
	//total de alunos que estao matriculados
	a[0].nome = "Ana";
	a[0].matricula = 1;
	a[0].nota = 85.5;

	a[1].nome = "Joao";
	a[1].matricula = 2;
	a[1].nota = 85.5;

	a[2].nome = "Marcos";
	a[2].matricula = 3;
	a[2].nota = 15;

	a[3].nome = "Aline";
	a[3].matricula = 4;
	a[3].nota = 99; 

	a[4].nome = "Maria";
	a[4].matricula = 5;
	a[4].nota = 55.5;

	//opcoes do sistema
	cout << "Seja bem vindo(a)!!!" << endl;
	cout << "Por favor escolha uma opcao de busca" << endl;
	cout << "[1] Matricula [2] Nome" << endl;
	
	//entrada da opcao de busca
	cin >> opcao;

	//if para ecolher a opcao de busca
	//opcao 1
	if (opcao == 1)
	{
		//Por meio da matricula
		cout << "Digite a Matricula: " << endl;
		cin >> matricula;
		int i = buscarPorMatriculaBinaria(a, 5, matricula);
		if (i != -1) 
		{
			cout << "Aluno buscado pela matricula: " << a[i].nome << endl;
			cout << "Matricula: " << a[i].matricula << endl;
			cout << "Nota: " << a[i].nota << endl;
			quantidade = contarNotasMaiores(a, 5, a[i].nota);
			cout << "Quantidade de alunos com nota superior a " << a[i].nota << ": " << quantidade << endl;
		} else 
		{
			cout << "Aluno nao encontrado." << endl;
		}
	}
	//opcao 2
	else if (opcao == 2)
	{
		//Por meio do nome
		cout << "Digite o Nome: " << endl;
		cin >> nome;
		int i = buscarPorNome(a, 5, nome);
		if (i != -1) 
		{
			cout << "Aluno buscado pelo nome: " << a[i].nome << endl;
			cout << "Matricula: " << a[i].matricula << endl;
			cout << "Nota: " << a[i].nota << endl;
			int quantidade = contarNotasMaiores(a, 11, a[i].nota);
			cout << "Quantidade de alunos com nota superior a " << a[i].nota << ": " << quantidade << endl;
		} else 
		{
			cout << "Aluno nao encontrado." << endl;
		}
	}
	
	//retorna
	return 0;
}
