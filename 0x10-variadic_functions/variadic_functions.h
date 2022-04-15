#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
/**
 * struct var - hold a char and a function
 * pointer in order to execute the task
 * @c: character
 * @f: function pointer
 */
typedef struct var
{
	char c;
	void (*f)(va_list);
} var_p;
void print_all(const char * const format, ...);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);

#endif
