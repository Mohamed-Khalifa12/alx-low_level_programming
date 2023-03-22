#include "main.h"

void print_to_98(int n)
{
    if(n <= 98)
    {
        for(int i = n; i <= 98; i++)
        {
            if(i != 98)
                printf("%d, ", i);
            else
                printf("%d", i);
        }
        _putchar('\n');
    }
    else
    {
        for(int i = n; i >= 98; i--)
        {
            if(i != 98)
                printf("%d, ", i);
            else
                printf("%d", i);
        }
        _putchar('\n');
    }
}