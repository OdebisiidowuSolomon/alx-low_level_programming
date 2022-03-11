#include <stdio.h>

/**
* main - prnts out alphabet in lowercase
*
* Return: Always 0 (Success) otherwise any other nummber
*/

int main(void)
{
	char ch = 'a';
	char Ch = 'A';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (Ch = 'A'; Ch <= 'Z'; Ch++)
	{
		putchar(Ch);
	}
	putchar('\n');

	return (0);
}
