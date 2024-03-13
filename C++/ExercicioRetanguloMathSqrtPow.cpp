// #include <bits/stdc++.h>
#include <iostream>
#include <cmath> //para sqrt e pow
#include <iomanip>

using namespace std;

int main()
{
    // DECLARAÇÃO VARIÁVEIS
    double area, perimeter, diagonal, base, height;

    // LEITURA INPUTS
    cout << ("Base do retângulo: ");
    cin >> base;
    cout << ("Altura do retângulo: ");
    cin >> height;

    // MANIPULAÇÃO DADOS
    area = (base * height);
    perimeter = 2 * (base + height);
    diagonal = sqrt((pow(base, 2.0)) + (pow(height, 2.0)));

    // PRINT OUTPUTS
    cout << fixed << setprecision(4);
    cout << "AREA = " << area << endl;
    cout << "PERIMETRO = " << perimeter << endl;
    cout << "DIAGONAL = " << diagonal << endl;

    return 0;
}