#include variadic_functions.c
#include <stdarg.h>

/** functions **/

int sum_them_all(const unsigned int R, ...)
{
        va_list za;
        unsigned int i;
        sum = 0;

        va_start(za, R);

        for (I = 0, i < R; i++)
                sum+= va_arg(za, int);

        va_end(za);
        return (sum);
}
