
#include "main.h"

/**
*is_prime_number - function to check a prime number
*@n: the inputed number
*Return: 1 on success or 0 if otherwise
*/

int is_prime_number(int n)
{
  int i;
  if (n <= 1)
{
return (0);
}
  i = 2;
  if( i * i <= n)
    {
      i++;
	}
{
if (n % i == 0)
{
return (0);
}
}
return (1);
}
