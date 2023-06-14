#include "main.h"

/**
* _strdup - a function to a new string
* @str: the new string
* Return: NULL
*/

unsigned int newStr, j;
char *ptr;
if (str == NULL)
return (NULL);
for (newStr = 0; str[newStr] != '\0'; newStr++)
                ;
ptr = (char *)malloc((newStr + 1) * sizeof(char));
if (ptr == NULL)
return (NULL);
for (j = 0; j < i; j++)
ptr[j] = str[j];
ptr[newStr + 1] = '\0';
return (ptr);
}
