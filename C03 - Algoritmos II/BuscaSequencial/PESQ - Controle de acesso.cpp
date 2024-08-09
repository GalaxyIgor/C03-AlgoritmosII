#include <iostream>
using namespace std;

//funcao para busca sequencial que verifica se o acesso é valido
int BuscaSeqID(int VetorAcesso[], int tamanho, int x)
 {
    bool achou = false;
    int i = 0;
    while (!achou && i < tamanho)
        achou = VetorAcesso[i++] == x;
    if(achou)
        return (i-1);
    else    
        return -1;
}

//funcao principal
int main ()
{
    int VetorAcesso[20], ValorX, i = 0;
    
    //while para adicionar os acessos
    while ( true )
    {
        //entrada do Vetor de acessos
        int entrada;
        cin >> entrada;
        if(entrada == -1 || i >= 20)
        {
            break;
        } 
        VetorAcesso[i++] = entrada;
    }
    
    //entrada do ValorX
    cin >> ValorX;
    
    //verifica o acesso
    int acesso = BuscaSeqID( VetorAcesso, i, ValorX);
    
    //saida
    if (acesso == -1)
    {
        cout << "Nao possui acesso" << endl;
    }
    else 
    {
        cout << "Possui acesso" << endl;
    }
        
    return 0;    
}
