#include "main.h"

void times_table(void)
{
    for(int i = 0; i <= 9; i++)
    {
        for(int j = 0; j <= 9; j++)
        {
            int result =i*j;
            if(j != 0)
            {
                _putchar(',');
                _putchar(' ');
            }

            if(result >= 10)
            {
                _putchar(result/10 + '0');
                _putchar(result%10 + '0');
            }
            else
            {
                _putchar(' ');
                _putchar(result%10 + '0');                
            }
        }
        _putchar('$');
        _putchar('\n');
    }
}