#include <iostream>
#include <cstring>
#include <cstdlib>
#include <limits>
#include "cal.h"
#include "ope.h"
#include "imp.h"
#include "../Clases c++/strM.h"

using namespace std;

int main()
{
    double n1, n2;
    double ultimoR = 0;
    char eleccion[1];
    char n[50];
    int op;
    char basura[30];

    cout << "WENAS PAPUS, ESTE PROGRAMA ACEPTA LAS SIGUIENTES OPERACIONES: ";
    cout << "\n\tSuma: (n1 + n2)";
    cout << "\n\tResta: (n1 - n2)";
    cout << "\n\tMultiplicacion: (n1 * n2) o (n1 x n2) ";
    cout << "\n\tDivicion: (n1 / n2)";
    cout << "\n\tPotencias: (n1 ^ n2)";
    cout << "\n\tRaiz cuadrada: (√n1)";
    cout << "\n\n\tCuando termines de leer presiona enter...";
    cin.getline(basura, 30, '\n');

    system("clear");

    while (true)
    {
        n1 = 0;
        n2 = 0;

        cout << "\t.:Calculadora perrona:.";
        cout << "\nQuieres usar tú ultimo resultado?: " << ultimoR;
        cout << "\ny/n : ";
        cin >> eleccion;

        strlwr(eleccion);

        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << endl;

        cout << "Digite la operacion: ";

        if (eleccion[0] == 'y')
        {
            cout << ultimoR;
        }

        cin.getline(n, 50, '\n');

        id(n, n1, n2, op, eleccion, ultimoR);

        ultimoR = operacion(n1, n2, op);

        system("clear");

        imprimir(n1,n2,ultimoR,op);
        system("clear");
    }

    cout << endl;
    return 0;
}