
#include "main.h"

/**
*is_prime_number - function to check if the input number is a prime number
*@n: the inputed number
*Return: 1 on success or 0 if otherwise
*/


int is_prime_number(int n)
{
n= scanf("%d", &n);
if (n % n == 0)
{
return (1);
if (n % 1 == 0)
return (1);
return (is_prime_number(n));
}
else
{
return (0);
}
}
