#include "main.h"

/**
 * _atoi - converts input strings an integer
 * @s: convert the input value
 *
 * Return: integer equivalent
 */
int _atoi(char *s)
{
int dig, j, k, ln, x, i;

i = j = x = k = ln = dig = 0;


	while (s[ln] != '\0')
		ln++;

	while (i < ln && x == 0)
	{
		if (s[i] == '-')
			++j;

		if (s[i] >= '0' && s[i] <= '9')
		{
			dig = s[i] - '0';
			if (j % 2)
				dig = -dig;
			k = k * 10 + dig;
			x = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			x = 0;
		}
		i++;
	}

	if (x == 0)
		return (0);

	return (k);
}
