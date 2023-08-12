#include <stdio.h>
/**
 *main - Entry point
 *description: 'programm that print numbers from 0 to 10'
 *Return: always 0
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		printf("%d", n);
	}
	printf("\n");
	return (0);
}
