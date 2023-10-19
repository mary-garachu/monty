#include "monty.h"
/**
 * cleanup - frees up the allocated memory
 * @stack: pointer to stack
 * Return: void
 */
void cleanup(stack_t *stack)
{
	while (stack != NULL)
	{
		stack_t *temp = stack;

		stack = stack->next;
		free(temp);
	}
}
