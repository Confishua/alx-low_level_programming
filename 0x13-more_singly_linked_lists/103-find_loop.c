#include "lists.h"
/**
* find_listint_loop - finds loop in a linked list
* @head: search for a linked list
*
* Return: address of the looping node, or NULL
*/
listint_t *find_listint_loop(listint_t *head)
{
listint_t *gently = head;
listint_t *speed = head;

if (!head)
return (NULL);

while (gently && speed && speed->next)
{
speed = speed->next->next;
gently = gently->next;
if (speed == gently)
{
gently = head;
while (gently != speed)
{
gently = gently->next;
speed = speed->next;
}
return (speed);
}
}

return (NULL);
}
