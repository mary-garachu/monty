#include "monty.h"
int num;
/**
 * pint_stack -print.
 * Description: Function that print the valueat top of stack
 * @top: element at the top of the stack (head)
 * @line_number: constant int value in the structure
 * Return: void
 **/
void pint(stack_t **top, unsigned int line_number)
{
	stack_t *tmp = *top;

	if (tmp != NULL)
	{
		printf("%d\n", tmp->n);
	}
	else
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
}
