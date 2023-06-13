#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

/**
*create_array - a function that creates an array
*@c: The char variable created
*@size: the memory space of the array
*Return: Null for success or pointer for failure
*/

char *create_array(unsigned int size, char c)
{
char *create;
unsigned int i;
create = malloc(size * sizeof(char));
if (size == 0)
{
return (NULL);
}
i = 0;
while (i < size)
{
create[i] = c;
i++;
}
create[i] = '\0';
free(create);
return (create);
}
