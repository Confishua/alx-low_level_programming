#include "lists.h"

/**
* insert_nodeint_at_index - insert a node at index position
* 
* @head: points to the initial node in the list
* @idx: index position of the  added node
* @n: data to be insert into the new node
*
* Return: pointer that points to the new node, or NULL
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int d;
listint_t *new_node;
listint_t *temp = *head;

new_node = malloc(sizeof(listint_t));
if (!new_node || !head)
return (NULL);

new_node->n = n;
new_node->next = NULL;
if (idx == 0)
{
new_node->next = *head;
*head = new_node;
return (new_node);
}
for (d = 0; temp && d < idx; d++)
{
if (d == idx - 1)
{
new_node->next = temp->next;
temp->next = new_node;
return (new_node);
}
else
temp = temp->next;
}
return (NULL);
}
