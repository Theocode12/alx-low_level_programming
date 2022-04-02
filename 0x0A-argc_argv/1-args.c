#include <stdio.h>

/**
 * main - Entry point
 * @argc: number of argument passed to the function
 * @argv: list of argv passed to the function
 * Return: returns (0) if succesfull
 */

int main(int argc, char *argv[]__attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
