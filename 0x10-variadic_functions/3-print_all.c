#include "variadic_functions.h"
/**
 * print_all - function that prints anything
 * @format: string
*/

void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	char *s;
	va_list args;

	va_start(args, format);
		while (format && format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%c", va_arg(args, int));
					break;
				case 'i':
					printf("%d", va_arg(args, int));
					break;
				case 'f':
					printf("%f", va_arg(args, double));
					break;
				case 's':
					s = va_arg(args, char *);
					if (s == NULL)
						s = "(nil)";
					printf("%s", s);
					break;
				default:
					i++;
					continue;
			}

			if (format[i + 1] != '\0')
				printf(", ");
			i++;
		}
	va_end(args);
	printf("\n");
}
