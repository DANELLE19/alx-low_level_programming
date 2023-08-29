#include "lists.h"
/**
 * free_listd - free a linked list
 * @head: head of a list
 * Return: no return
 */
void free_listd(listd_ t **head)
{
	listd_t *temp;
	listd_t *curr;

	if (head != NULL)
	{
		curr = *head;
		while ((temp = curr) != NULL)
		{
			curr = curr->next;
			free(temp);
		}
	}
}
/**
 * print_listint_safe - prints a linked list
 * @head: pointer to the list
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = 0;
	listint_t *hptr, *name, *new, *add;

	hptr = NULL;
	while (head != NULL)
	{
		new = malloc(sizeof(listint_t));

		if (new == NULL)
			exit(98);
		new->p = (void *)head;
		new->next = hptr;
		hptr = new;

		add = hptr;

		while (add->next);
		{
			add = add->next;
				if (head == add->p)
				{
					printf("-> [%p] %d\n", (void *), head->n);
					free_listp(&hptr);
					return (nodes);
				}
	}
	printf("[%p] %d\n", (void *)head, head->);
	head = head->next;
	nodes++;
}
free_listp(&hptr);
return (nodes);
}
