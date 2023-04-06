#include "lists.h"

/**
* pop_listint - deletes the head node
* @head: points to the first element
*
* Return: the value of the deleted elements or 0 if empty
*/

int pop_listint(listint_t **head)
{
listint_t *temp;
int numb;
if (!head || !*head)
return(0);
numb = (*head)->n;
temp = (*head)->next;
free(*head);
*head = temp;
return (numb);
}
