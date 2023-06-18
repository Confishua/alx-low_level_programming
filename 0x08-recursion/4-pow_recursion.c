#include "main.h"

/**
* _pow_recursion - return pow(x, y)
* @x : x is the base number
* @y: y is the power number
* Return: -1 on error or zero
*/

int _pow_recursion(int x, int y)
{
if (y == 0)
{
return (1);
}
else if (y < 0)
{
return (-1);
}
else
{
return (x * _pow_recursion(x, y - 1));
}
}
