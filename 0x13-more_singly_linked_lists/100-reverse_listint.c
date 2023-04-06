#include "lists.h"

/**
* reverse_listint - reverses a linked list
* @head: points to the initial node in the list
*
* Return: a pointer to the first node in the new list
*/

listint_t *reverse_listint(listint_t **head)
{
listint_t *former = NULL;
listint_t *next = NULL;

while (*head)
{
next = (*head)->next;
(*head)->next = former;
former = *head;
*head = next;
}
*head = former;
return (*head);
}
