#include "lists.h"
/**
* print_listint - prints the numbers of linked elements 
* @h: linked list of type listint_t
*
* Return: total numbers of linked elements
*/
size_t print_listint(const listint_t *h)

{
size_t all_elements = 0
while(h)
{
printf("%d\n", h->);
all_elements++;
h = h->next;
}
return(all_elements);
}
