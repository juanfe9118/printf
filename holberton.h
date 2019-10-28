#ifndef PRINTF
#define PRINTF
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
/**
 * struct format - structure for printf format
 * @f: format char
 * @p: function for format
 */
typedef struct format
{
	char f;
	int (*p)(va_list);
	int (*pl)(va_list, int);
} form;
/* main function */
int _printf(const char *format, ...);

/* side functions */
int _strlen(const char *s);
int _putchar(char c);
int _itoa(int, int);
void _revstr(char *);
int _pow(int, int);
int _isnumber(int, int);
int _compare(char, int, va_list);
void hexa(int x);

/* parameter functions */
int _char(va_list);
int _str(va_list, int);
int _int(va_list, int);
int _binary(va_list);
int _strspe(va_list);
#endif
