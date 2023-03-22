#include "main.h"

int main(void)
{
	char w[] = "_putchar";
	int i = 0;
	while(w[i])
	{
		_putchar(w[i]);
	}
	_putchar('\n');
}

void _putchar(char c)
{
    putchar(c);
}
