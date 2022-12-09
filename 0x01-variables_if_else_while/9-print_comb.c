#include <stdio.h>

/**
 * main - print number from 0 to 9 seperated by a comma followed by a space
 *
 * Returns: Always 0 (Success)
 *
 */

int main(void)
{
	int num = '0';

	while (num <= '9')
	{
		putchar(num);
		if (num != '9')
		{
			putchar(',');
			putchar(' ');
		}
	num++;
	}
	putchar('\n');
	return (0);
}
