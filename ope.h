#include <cmath>

double operacion(double n1, double n2, int op)
{
    if (n1 == 0 || n2 == 0)
    {
        return -9999;
    }
    
    int n = n1;
    switch (op)
    {
    case '+':
        return n1 + n2;
        break;
    case '-':
        return n1 - n2;
        break;
    case '*':
        return n1 * n2;
        break;
    case 'x':
        return n1 * n2;
        break;
    case '/':
        return n1 / n2;
        break;
    case '^':
        for (int i = 0; i < (n2 - 1); i++)
        {
            n *= n1;
        }
        return n;
        break;
    case -120:
        return sqrt(n2);
        break;
    default:
        return -999;
        break;
    }
}