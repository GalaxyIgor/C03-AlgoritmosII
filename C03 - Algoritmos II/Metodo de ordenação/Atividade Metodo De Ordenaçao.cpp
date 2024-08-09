#include <iostream>
using namespace std;

//Selection Sort (é o mais rapido)

void selection_sort(int vetor[], int n)
{   
    for(int j =0 ; j < n; j++)						// 1 + 3n + 3n + 3
	{
		int pos_menor = j, menor = vetor[j], aux;	//5n
    	for(int i = j + 1 ; i < n; i++)				//(3 + 3n/2 + 3n/2)n = 6n + 3n ao quadrado
		{
        	if(vetor[i] < menor)					//2n ao quadrado
			{
	  		   	menor = vetor[i];					//3(n/2)n = 1,n ao quadrado
				pos_menor = i;						//2(n/2)n = n ao quadrado
	   		}
			aux = vetor[j];							//3n
			vetor[j] = menor;						//3n
			vetor [pos_menor] = aux;				//3n
		}
	}
}//O(n) ao qudrado, pois tem 2 O(n²)				//Total = 7,5n ao quadrado + 26 n + 4

//Insertion Sort

void insertion_sort (int vetor[], int tamanho)
{
    int i, j;                                       //2n
    int chave;                                      //1n

    for (j = 1; j < tamanho; j++)                   //1 + 3n + 3n + 3 = 4 + 6n
    {               
        chave = vetor [j];                          //3n
        i = j - 1;                                  //3n + 1
        while((i >= 0) && (vetor[i]> chave))        //4n + 5
        {
            vetor[i + 1] = vetor[i];                //4n + 1
            i = i - 1;                              //3n + 1
        }
        vetor[i + 1] = chave;                       //4n + 1
    }
}//O(n)                                             //Total = 30n + 13

//Bubble Sort

void bubble_sort(int vetor[], int tamanho)
{
    int i, j;                                       //2n
    int trab;                                       //1n
    bool troca;                                     //1n
    int limite;                                     //1n

    troca = true;                                   //3n
    limite = tamanho - 1;                           //3n + 1
    while (troca)                                   //1n
    {
        troca = false;                              //3n
        for (i = 0; i < limite; i++)                //6n + 4
        {
            if (vetor[i] > vetor[i + 1])            //4n + 2
            {
                trab = vetor[i];                    //4n
                vetor [i] = vetor [i + 1];          //4n + 1
                vetor [i + 1] = trab;               //4n + 1
                j = i;                              //3n
                troca = true;                       //3n
            }
        }
        limite = j;                                 //3n
    }
}//O(n)                                             //46n + 9