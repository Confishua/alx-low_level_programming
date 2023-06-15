#include "main.h"
/**
* _strncat - concatenate two strings
* using at most n bytes from src
* @dest: input value
* @src: input value
* @n: input value
*
* Return: dest
*/


char *_strncat(char *dest, char *src, int n)
{
	int i, j;
for (i = 0; dest[i]; i++)
;
for (j = 0; j < n ; j++)
{
if (src[j] != '\0')
		{
			dest[i] = src[j];
			i++;
		}
		else
			break;
	}
	return (dest);
}
