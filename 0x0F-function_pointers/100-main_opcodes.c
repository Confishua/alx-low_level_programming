#include <stdio.h>
#include "function_pointers.h"

/**
* print_opcodes - The main function to print opcodes
*@start: the beginning
*@end: the end location
*Return: print Error for incorrect argument and exit with 1
*/
void print_opcodes(unsigned char *start, unsigned char *end)
{
unsigned char *p = start;
if (p < end)
{
p++;
printf("%02x ", *p);
}
printf("\n");
}

int main(void)
{
unsigned char *main_start = (unsigned char *)&main;
unsigned char *main_end = (unsigned char *)&print_opcodes;
print_opcodes(main_start, main_end);

return (0);
}
