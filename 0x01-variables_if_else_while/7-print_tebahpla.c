#include <stdio.h>
/**
 *main - Entry point
 *description: 'programm that prints alphabets in lowercase in verse'
 *Return: always 0
 */
int main(void)
{
	int n = 122;

	while (n >= 97)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
