#include "main.h"

/**
*_puts_recursion- this functions as the puts() function
*@s: This holds the string to be displayed
* Return: 0 if successful
*/

void _puts_recursion(char *s)
{
if (*s)
{
_putchar(*s);
_puts_recursion(s + 1);
}
else
_putchar('\n');
}
