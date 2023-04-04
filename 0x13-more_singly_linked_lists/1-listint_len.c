#include "lists.h"

/**
* listint_len - returns number of elements in a linked list
* @h: To traverse linked list of type listint_t
*
* Return: numbers of linked elements
*/
size_t listint_len(const listint_t *h)
{
size_t numbers_of_elements = 0;

while (h)
{
numbers_of_elements++;
h = h->next;
}

return (numbers_of_elements);
}
