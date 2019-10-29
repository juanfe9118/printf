#include "holberton.h"

/**
 *_itoa - converts an int to a string of char and prints it
 *@x: integer that will be converted
 *@len: characters that must be printed
 *Return: amount of bytes printed
 */
int _itoa(int x, int len)
{
	char s[11];
	int i = 0, bytes = 0;
	char flag;

	if (x == INT_MIN)
	{
		x = 214748364;
		_putchar('-');
		flag = '8';
	}

	if (x < 0)
	{
		_putchar('-');
		x *= -1;
	}

	while (x != 0)
	{
		s[i] = x % 10 + 48;
		x = x / 10;
		i++;
	}
	i--;
	bytes = i;
	if ((len - 1) > i)
		bytes = len;
	while ((len - 1) > i)
	{
		write(1, " ", 1);
		len--;
	}
	while (i >= 0)
	{
		write(1, (s + i), 1);
		i--;
	}
	if (flag != 0)
		write(1, &flag, 1);
	return (bytes);
}
