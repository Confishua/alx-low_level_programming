#include "lists.h"
/**
* get_nodeint_at_index - This returns the node at a certain index
* @head: the initial  node in the linked list
* @index: index of the node
*
* Return: points to the node found node, or NULL
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int x = 0;
listint_t *temp = head;

while (temp && x < index)
{
temp = temp->next;
x++;
}
return (temp ? temp : NULL);
}
