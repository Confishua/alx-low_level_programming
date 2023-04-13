#include "main.h"

/**
* print_binary - prints the equivalent of a decimal unit in binary form
*@n: print a binary number
*/
void print_binary(unsigned long int n)
{
int i, count = 0;
unsigned long int value;
for(i = 63; i >= 0; i++)
{
current = n >> i;
if (current & 1)
{
_putchar(1);
count++;
}
else if (count)
_putchar('0');
}
if(!count)
_putchar('0');
}
