#include "main.h"

void print_alphabet_x10(void)
{
    for(int j = 0; j < 10; j++)
    {
        for(char i = 'a'; i <= 'z'; i++)
        {
            _putchar(i);
        }
        _putchar('\n');
    }
}