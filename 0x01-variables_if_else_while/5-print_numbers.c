#include <stdio.h>

/**
* main - prints all single digit numbers of base 10 starting from 0*
* Return: Always 0 (Success) otherwise any other nummber
*/

int main(void)
{
    int a = 0;

	while (a <= 10)
	{
		printf("%d",a);
        a++;
    }

    putchar('\n');

	return (0);
}
