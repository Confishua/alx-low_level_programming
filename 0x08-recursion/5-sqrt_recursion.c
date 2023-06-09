#include "main.h"

/**
*_sqrt_recursion - This function like the sqrt() function
* @n: The number whose square root is to be found
* Return: 0 0n success, -1 on error
*/

int _sqrt_recursion(int n)
{
if (n % 2 != 0)
{
return (-1);
}
if (n % 2 == 0)
{
_sqrt_recursion(_sqrt_recursion(n));
}
return (0);
}