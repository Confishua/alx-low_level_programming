#include "main.h"


/**
*_pow_recursion - returns the power of any given numbers
* @x : x is the base number
* @y: y is the power number
* Return : 0 for success and
*-1:  on error
*/

int _pow_recursion(int x, int y)
{
if (y > x)
{
return (-1);
}
else
{
return (0);
return (_pow_recursion(x, y));
}
}
