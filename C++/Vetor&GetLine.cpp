#include <bits/stdc++.h>

using namespace std;

int main()
{
    // DECLARAÇÃO VARIÁVEIS
    string names[2];
    int ages[2];

    // LEITURA INPUTS
    int sum = 0;
    for (int i = 0; i < 2; i++)
    {
        cout << "Dados da " << i + 1 << "ª pessoa:";
        cout << "\nNome: ";
        getline(cin, names[i]);
        cout << "Idade: ";
        cin >> ages[i];
        sum += ages[i];
        cin.ignore(INT_MAX, '\n');
    }

    // MANIPULAÇÃO DADOS
    double avarege = sum / 2.0;

    // PRINT OUTPUTS
    cout << fixed << setprecision(1);
    cout << "A idade media de " << names[0] << " e " << names[1] << " eh de " << avarege << " anos";
    return 0;
}
