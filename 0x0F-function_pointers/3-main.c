#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**/

int main(int argc, char* argv[])
{
	int num1, num2, value;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	f = get_op_func(argv[2]);
	value = f(num1, num2);
	printf("%d\n", value);
	return (0);

}
