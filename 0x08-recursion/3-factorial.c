#include "main.h"
#include <stdio.h>

/**
*factorial - To print in recursion
*@n: the number to print
*Return: 0 on success
*Onerror: return -1
*/


int factorial(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 0)
{
return (1);
}
else
{
return (n * factorial(n - 1));
}
}
