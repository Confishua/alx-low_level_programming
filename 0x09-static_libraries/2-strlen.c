#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
int len = 0, i;
for (i = 0; s[i]; i++)
{
if (s[i] != '\0')
len += 1;
else
break;
}
return (len);
}
