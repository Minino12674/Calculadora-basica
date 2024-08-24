#include <iostream>

using namespace std;

void imprimir(double n1, double n2, double ultimoR, int op)
{
    char b[30];
    char ope = op;
    cout << "\t.:Calculadora perrona:. \n\n";
    if (op == -120)
    {
        cout << "√";
    }
    else
    {
        cout << n1 << " " << ope << " ";
    }

    cout << n2 << " = " << ultimoR << "\nPresione ENTER para terminar...";
    cin.getline(b, 30, '\n');
}