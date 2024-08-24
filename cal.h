#include <cstdlib>
#include "../Clases c++/strM.h"

void id(char *numeros, double &n1, double &n2, int &op, char *eleccion, double ult)
{
    int longitud = strlen(numeros);
    int flag = 0;
    char n3[2][25];
    int nIDS[2] = {0, 0};
    int normal;

    for (int i = 0; i < longitud; i++)
    {
        if ((numeros[i] >= 48 && numeros[i] <= 57) || numeros[i] == '.')
        {
            if (flag == 0)
            {
                n3[0][i] = numeros[i];
            }
            else
            {
                n3[1][(longitud - i) - 1] = numeros[i];
            }
            nIDS[flag]++;
        }
        else if (numeros[i] != ' ')
        {
            if (i == 0 || flag == 1)
            {
                if (numeros[i] == '-')
                {
                    if (flag == 0)
                    {
                        n3[0][i] = numeros[i];
                    }
                    else
                    {
                        n3[1][(longitud - i) - 1] = numeros[i];
                    }

                    n3[flag][i];
                }
            }
            else
            {
                op = numeros[i];
                flag++;
            }
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = (nIDS[i] - 1); j < 25; j++)
        {
            n3[flag][j] == ' ';
        }
    }

    if (eleccion[0] == 'y')
    {
        n1 = ult;
    }
    else
    {
        n1 = atof(n3[0]);
    }

    strrev(n3[1]);
    n2 = atof(n3[1]);
    
}