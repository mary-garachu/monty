#include "monty.h"
/**
 * push - adds an element to the top of the stack
 * @stack: stack to be added on
 * @line_number: for printing out errors
 * Return: void
 */
void push(stack_t **stack, unsigned int line_number)
{
	stack_t *new_node;

	if (num == INT_MIN)
	{
		fprintf(stderr, "L%u: usage: push integer\n", line_number);
		cleanup(*stack);
		exit(EXIT_FAILURE);
	}
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		cleanup(*stack);
		exit(EXIT_FAILURE);
	}
	new_node->n = num;
	new_node->prev = NULL;
	if (*stack == NULL)
	{
		new_node->next = NULL;
	}
	else
	{
		new_node->next = *stack;
		(*stack)->prev = new_node;
	}
	*stack = new_node;
	num = INT_MIN;
}
