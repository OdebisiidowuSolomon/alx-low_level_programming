#include <stdio.h>

/**
* main - prints the lowercase alphabet in reverse
*
* Return: Always 0 (Success) otherwise any other nummber
*/

int main(void)
{
	char ch = 'z';

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
