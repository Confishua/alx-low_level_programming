#include "main.h"

/**
*_sqrt_recursion - This function like the sqrt() function
* @n: The number whose square root is to be found
* Return: 0 0n success, -1 on error
*/

int squareRootRecursion(int n, int guess)
{
if (guess * guess == n)
{
return (guess);
}
if (guess * guess > n)
{
return (-1);
}
return squareRootRecursion(n, guess + 1);
}
int _sqrt_recursion(int n)
{
return squareRootRecursion(n, 1);
}
