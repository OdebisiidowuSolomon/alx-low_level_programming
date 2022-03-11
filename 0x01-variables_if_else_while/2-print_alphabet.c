#include <stdio.h>

/**
* main - prnts out alphabet in lowercase
*
* Return: Always 0 (Success) otherwise any other nummber
*/

int main(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
