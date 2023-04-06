#include "lists.h"

/**
*sum-listint - returns the sum of values in a listint list
*@head: first node in the linked list
*
*Return: the total sum
*/
int sum_listint(listint_t *head)
{
int sum_of_values=0;
listint_t *temp = head;
while(temp)
{
sum_of_values += temp->n;
temp=temp->next;
}
return (sum_of_values);
}
