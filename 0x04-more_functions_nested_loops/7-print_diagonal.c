#include "main.h"

void print_diagonal(int n)
{
    if(n <= 0)
    {
        _putchar('\n');
        return;
    }

    int i;
    int j;

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(i != j)
                _putchar(' ');
            else
                _putchar('\\');
        }
        _putchar('\n');
    }
}