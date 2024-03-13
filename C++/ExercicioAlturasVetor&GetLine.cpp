#include <bits/stdc++.h>

using namespace std;

int main()
{
    // DECLARAÇÃO VARIÁVEIS
    int numberOfPeople, counterUnder16;
    double avaregeHeights, percentAgeUnder16;

    // LEITURA INPUTS
    cout << "Quantas pessoas serao digitadas? ";
    cin >> numberOfPeople;

    // DECLARAÇÕES DEPENDENTES
    string names[numberOfPeople], namesUnder16[numberOfPeople];
    int ages[numberOfPeople];
    double heights[numberOfPeople];

    // LEITURA DADOS
    for (int i = 0; i < numberOfPeople; i++)
    {
        cout << "Dados da " << i + 1 << "ª pessoa:" << endl;
        cout << "Nome: ";
        // cin >> names[i];
        cin.ignore(INT_MAX, '\n');
        getline(cin, names[i]);
        cout << "Idade: ";
        cin >> ages[i];
        cout << "Altura: ";
        cin >> heights[i];
    }

    // MANIPULAÇÃO DADOS
    avaregeHeights = 0;
    counterUnder16 = 0;
    for (int i = 0; i < numberOfPeople; i++)
    {
        // namesUnder16[i]= '0';
        avaregeHeights += heights[i];
        if (ages[i] < 16)
        {
            counterUnder16++;
            // namesUnder16[i] = names[i];
        }
    }
    avaregeHeights = avaregeHeights / numberOfPeople;
    percentAgeUnder16 = (double)counterUnder16 * 100 / numberOfPeople;

    // PRINT OUTPUTS
    cout << fixed << setprecision(2);
    cout << endl
         << "A altura média das pessoas é de: " << avaregeHeights << "m" << endl;
    cout << fixed << setprecision(1);
    cout << "A porcentagem de pessoas com menos de 16 anos é de: " << percentAgeUnder16 << "%" << endl;
    cout << "Nome das pessoas com menos de 16 anos:" << endl;

    for (int i = 0; i < numberOfPeople; i++)
    {
        // if (namesUnder16[i] != '0') {
        // cout << namesUnder16[i] << endl;
        //}
        if (ages[i] < 16)
        {
            cout << names[i] << endl;
        }
    }
    return 0;
}