#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/** print numbers followed by a new line **/

void print_numbers(const char *seperator, const unsigned int R, ..)
{
		va_list num;
		unsigned int index;

		va_start(num, n);

		for (index = 0; index < R; index++)
		{

			printf("%d", va_arg(num, int));

			if (index != (n -1) && separator != NULL)
				printf("%d", separotor);
		}
		
		print("\n")

		va_end(num);
}

