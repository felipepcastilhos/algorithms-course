#include <bits/stdc++.h>

using namespace std;

int main()
{
    // DECLARAÇÃO VARIÁVEIS
    int ordemMatriz;

    // LEITURA INPUTS
    cout << "Qual a ordem da matriz? ";
    cin >> ordemMatriz;

    // DECLARAÇÃO MATRIZ
    int matriz[ordemMatriz][ordemMatriz];

    // LEITURA MATRIZ
    int contNegativos = 0;
    for (int i = 0; i < ordemMatriz; i++)
    {
        for (int j = 0; j < ordemMatriz; j++)
        {
            cout << "Elemento [" << i << "," << j << "]: ";
            cin >> matriz[i][j];
            if (matriz[i][j] < 0)
            {
                contNegativos++;
            }
        }
    }
    // MANIPULAÇÃO DADOS E PRINT OUTPUTS
    cout << "DIAGONAL PRINCPAL: " << endl;
    for (int i = 0; i < ordemMatriz; i++)
    {
        cout << matriz[i][i] << " ";
    }
    cout << endl
         << "QUANTIDADE DE NEGATIVOS = " << contNegativos << endl;

    return 0;
}