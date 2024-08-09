#include <iostream>
#include <iomanip> // Para usar setprecision
#include <cmath> // Para usar abs, serve para fazer modulo
using namespace std;

double raiz(double x, double x0, double E) 
{
    if (abs(x0 * x0 - x) <= E)
        return x0;
    else
        return raiz(x, (x0 + x / x0) / 2, E);
}

int main() 
{
    double x, x0, E;
    
    //entrada
    cin >> x >> x0 >> E;

    double resultado = raiz(x, x0, E);
    
    //saida
    cout << fixed << setprecision(4) << resultado << endl;

    return 0;
}
