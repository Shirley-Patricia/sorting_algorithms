#include "sort.h"
/**
* insertion_sort_list -  function that sorts an list of integers in ascending order
*
*@list: list double linked
*
* Return: Nothing
**/
void insertion_sort_list(listint_t **list)
{
	listint_t *ap_list, *temp = NULL;

	if (list == NULL)
		return;
	
	ap_list = *list;

	while (ap_list != NULL)
	{
		while (ap_list->next && (ap_list->n < ap_list->prev->n))
		{
			//ap_list->n = n;
			ap_list->next = temp;
			temp = temp->next;
			//ap_list->prev->n = ap_list->next;
			ap_list->next = temp->next;
			temp->prev = ap_list->next;

			ap_list = *list;

			print_list(*list);
		}
	}
	
}