#include "sort.h"
/**
* insertion_sort_list - Function that sorts an list of integers
* in ascending order.
*
*@list: list double linked
*
* Return: Nothing
**/
void insertion_sort_list(listint_t **list)
{
	listint_t *ap_list = NULL;
	listint_t *temp = NULL;

	if (list == NULL)
		return;

	ap_list = *list;

	while (ap_list != NULL)
	{
		while (ap_list != NULL && ap_list->next && (ap_list->next->n < ap_list->n))
		{
			temp = ap_list->next;
			ap_list->next = temp->next;
			temp->prev = ap_list->prev;

			if (ap_list->prev != NULL)
				ap_list->prev->next = temp;

			if (temp->next != NULL)
				temp->next->prev = ap_list;

			ap_list->prev = temp;
			temp->next = ap_list;

			if (temp->prev != NULL)
			{
				ap_list = temp->prev;
			}
			else
			{
				*list = temp;
			}

			print_list(*list);
		}
		ap_list = ap_list->next;
	}
}
