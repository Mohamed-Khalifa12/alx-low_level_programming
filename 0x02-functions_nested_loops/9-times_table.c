#include "main.h"

void times_table(void)
{
	int i = 0, j = 0;
    for(i = 0; i <= 9; i++)
    {
        for(j = 0; j <= 9; j++)
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
            {	if(j != 0)
                	_putchar(' ');
                _putchar(result%10 + '0');                
            }
        }
        _putchar('\n');
    }
}
