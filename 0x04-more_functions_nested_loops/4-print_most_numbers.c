#include "main.h"
#include <stdio.h>

int void_print_numbers(void)
{
    int a;
    for (a = 0; a < 10; a++)
    {
        if (a != 2 || a != 4)
        {
             _putchar(a);
        }
        return (0);
    }
}
