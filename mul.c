#include "monty.h"

/**
 * _mul - main entry
 * Description: multiply the seccond top element of stack and the top element
 * @top: element at the top of the stack (head)
 * @line_number: constant int value in the structure
 * Return: void
 */
void mul(stack_t **top, unsigned int line_number)
{
	stack_t *tmp;

	if (*top == NULL || (*top)->next == NULL)
	{
		fprintf(stderr, "L%u: can't mul, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	tmp = (*top)->next;
	tmp->n *= (*top)->n;
	pop(top, line_number);
}
