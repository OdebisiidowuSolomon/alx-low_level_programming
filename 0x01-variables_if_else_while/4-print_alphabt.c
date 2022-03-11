#include <stdio.h>

/**
* main - prints the alphabet in lowercase, and then in uppercase
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
