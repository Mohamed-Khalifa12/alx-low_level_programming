#include "../main.h"

int main()
{
    char word[] =  "_putchar";
    int i = 0;

    while (word[i])
    {
       _putchar(word[i]); 
        i++;
    }
    _putchar('\0');

    return 0;
}