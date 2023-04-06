#include "lists.h"
/**
* add_nodeint - The new node added at the beginning of linked list
**/
/**
*@head: points to the initial node
*@n: data to insert in that new node
*
*Return: pointer to the new node if successful, or NULL
**/

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;
new = malloc(sizeof(listint_t));
if (!new)
return (NULL);
new->n = n;
new->next = *head;
*head = new;

return (new);
}
