#include "sort.h"
/**
 * insertion_sort_list - Insertion Sort Algorithm
 * @list: Double linked list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *rear, *front;

	if (list != NULL && (*list)->next)
	{
		rear = (*list);
		front = (*list)->next;
		current = front->next;
		while (front)
		{
			while (front->prev && front->prev->n > front->n)
			{
				swap(list, rear, front);
				/**front = current->prev;*/
				rear = front->prev;
				print_list(*list);
			}
			front = current;
			if (front)
			{
				current = current->next;
				rear = front->prev;

			}
			else
			{
				break;
			}
		}
	}
}
/**
 * swap - Function to swap nodes
 * @list: Double linked list
 * @rear: Pointer to the struct to reference the rear node
 * @front: Pointer to the struct to reference the front node
 */
void swap(listint_t **list, listint_t *rear, listint_t *front)
{
	if (rear->prev)
		rear->prev->next = front;
	else
		*list = front;
	rear->next = front->next;
	front->next = rear;
	if (rear->next)
		rear->next->prev = rear;
	front->prev = rear->prev;
	rear->prev = front;
}
