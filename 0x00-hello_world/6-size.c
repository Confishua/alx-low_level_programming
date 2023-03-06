#include <stdio.h>

/**
* main - (Print different sizes of the a computer structure)
*
* Return: always 0 (0 for success)
**/

int main(void)
{
char a;
int b;
long int c;
long long int d;
float f;

printf("Size of a char: %d byte(s)", sizeof(a));
printf("\n");
printf("Size of an int: %d byte(s)", sizeof(b));
printf("\n");
printf("Size of a long int: %ld byte(s)", sizeof(c));
printf("\n");
printf("Size of a long long int: %ld byte(s)", sizeof(d));
printf("\n");
printf("Size of a float: %d byte(s)", sizeof(f));
printf("\n");
return (0);
}
