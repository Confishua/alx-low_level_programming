#include "main.h"
#include <string.h>
/**
* _print_rev_recursion - prints string in reverse format to stdou
* @s: string to print
*Return : 0 on success
*/

void _print_rev_recursion(char *s)
{
if (*s)
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
_putchar('\n');
}
