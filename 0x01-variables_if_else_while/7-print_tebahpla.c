#include <stdio.h>
/**
 * main - Outputs alphabet in reverse, new line next
 * Return:0
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
