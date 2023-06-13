#include "main.h"

/**
* _strdup - a function to a new string
* @str: the new string
* Return: NULL
*/

char *_strdup(char *str)
{
char *newStr;
newStr = malloc(sizeof(str) + 1);

if (str == NULL)
{
return (NULL);
}
free (newStr);
return (0);
}
