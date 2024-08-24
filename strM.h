// tuve que hacer un header para que las funciones sirvan ya que en cstring no existian (matenme)

#ifndef STRM_H
#define STRM_H

#include <cstring>

using namespace std;

void strrev(char *str) // Funcion proporcionada por chatgpt
{
    int length = strlen(str);
    for (int i = 0; i < length / 2; ++i)
    {
        // Intercambiar los caracteres
        char temp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temp;
    }
}

void strupr(char *str)
{
    int longitud = strlen(str);

    for (int i = 0; i < longitud; i++)
    {
        if (str[i] >= 97 && str[i] <= 122)
        {
            str[i] -= 32;
        }
    }
}

void strlwr(char *str)
{
    int longitud = strlen(str);

    for (int i = 0; i < longitud; i++)
    {
        if (str[i] >= 65 && str[i] <= 90)
        {
            str[i] += 32;
        }
    }
}

#endif