#include "main.h"

/**
* get_bit - gives the return value of a bit of an index in a decimal number
* @n: number to search
* @index: index of the bit
*
* Return: the value of the bit
*/
int get_bit(unsigned long int n, unsigend in index)
{
int bit_val;
if (index > 63)
return (-1);
bit_val = (n>> index) & 1;
return (bit_val);
}
