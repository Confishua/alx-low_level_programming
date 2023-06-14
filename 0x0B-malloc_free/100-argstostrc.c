#include  "main.h"
#include <stdlib.h>
#include <stdio.h>


/**
* argstostr - a function that concatenates all args
* @ac: argument coounter
* @av: saves values in this pointer
* Return: return the strings to  stdout
*/

char *argstostr(int ac, char **av)
{
int j, i, counter = 0, n = 0;
char *arg;


if ((ac == 0) || (av == NULL))
return (NULL);
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
counter++;
}
counter += ac;
arg = (char *)malloc((counter + 1) * sizeof(char));
if (arg == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
{
arg[n] = av[i][j];
n++;
}
if (arg[n] == '\0')
{
arg[n++] = '\n';
}
}
return (arg);
}
