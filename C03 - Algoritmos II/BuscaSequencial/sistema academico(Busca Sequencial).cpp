#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//struct para armazenar os dado dos aluno
struct Aluno 
{
	string nome;
	float nota;
	int matricula;
};

//funcao para buscar matricula
int buscarPorMatricula(Aluno a[], int n, int matricula) 
{
	for (int i = 0; i < n; i++) 
	{
		if (a[i].matricula == matricula) 
		{
			return i;
		}
	}
	return -1;
}

//funcao para buscar por nome
int buscarPorNome(Aluno a[], int n, string nome) 
{
	for (int i = 0; i < n; i++) 
	{
		if (a[i].nome == nome) 
		{
			return i;
		}
	}
	return -1;
}

//funcao para contar Notas Maiores
int contarNotasMaiores(Aluno a[], int n, float nota) 
{
	int quantidade = 0;
	for (int i = 0; i < n; i++) 
	{
		if (a[i].nota > nota) 
		{
			quantidade++;
		}
	}
	return quantidade;
}

//funcao main
int main ()
{
	// declara opcao
	int opcao;
	// declara a matricula
	int matricula;
	// declara a quantidade de notas superiores a escolhida
	int quantidade;
	// entra na struct
	Aluno a[11];
	// string para escrver o nome
	string nome;
	
	//total de alunos que estao matriculados
	a[0].nome = "Ana";
	a[0].matricula = 2525;
	a[0].nota = 85.5;

	a[1].nome = "Joao";
	a[1].matricula = 1089;
	a[1].nota = 85.5;

	a[2].nome = "Marcos";
	a[2].matricula = 103;
	a[2].nota = 15;

	a[3].nome = "Aline";
	a[3].matricula = 576;
	a[3].nota = 99; 

	a[4].nome = "Maria";
	a[4].matricula = 10;
	a[4].nota = 55.5;
	
	a[5].nome = "Carlos";
	a[5].matricula = 1234;
	a[5].nota = 78.5;

	a[6].nome = "Fernanda";
	a[6].matricula = 5678;
	a[6].nota = 90.0;

	a[7].nome = "Gabriel";
	a[7].matricula = 9101;
	a[7].nota = 65.5;

	a[8].nome = "Julia";
	a[8].matricula = 1121;
	a[8].nota = 88.0;

	a[9].nome = "Lucas";
	a[9].matricula = 41;
	a[9].nota = 70.0;

	a[10].nome = "Rafaela";
	a[10].matricula = 511;
	a[10].nota = 95.5;

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
		int i = buscarPorMatricula(a, 11, matricula);
		if (i != -1) 
		{
			cout << "Aluno buscado pela matricula: " << a[i].nome << endl;
			cout << "Matricula: " << a[i].matricula << endl;
			cout << "Nota: " << a[i].nota << endl;
			quantidade = contarNotasMaiores(a, 11, a[i].nota);
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
		int i = buscarPorNome(a, 11, nome);
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
