#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - add two numbers
 * @a: first number
 * @b: second number
 * Return: addition of the two numbers
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract two numbers
 * @a: first number
 * @b: second number
 * Return: the value after subtraction
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two number
 * @a: first number
 * @b: second number
 * Return: multiplication of the two numbers
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides a by b
 * @a: first number
 * @b: second number
 * Return: division of a by b
 */

int op_div(int a, int b)
{
	if (!b)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - mod of two numbers
 * @a: first number
 * @b: second number
 * Return: the remainder
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
