#include "main.h"

int print_last_digit(int n)
{
    int lastdig =  abs(n) % 10;
    _putchar('0' + lastdig);
    return lastdig;
}
