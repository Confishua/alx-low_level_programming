#include "function_pointers.h"

/**
* print_name - a function to print names
* @name: The string to print
* @f: pointer to the strings
*/

void print_name(char *name, void (*f)(char *))
{
if (f != 0 && name != 0)
f(name);
}
