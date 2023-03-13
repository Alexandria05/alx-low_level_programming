<<<<<<< HEAD
#include"main.h"

/**
 * main - Entry point
 * Description: prints _putchar
 * Return: 0 (Success)
 */

int main(void)
{
	char str[] = "_putchar";
	int ch;

	for (ch = 0; ch < 8; ++ch)
		_putchar(str[ch]);
	_putchar('\n');
	return (0);
=======
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
>>>>>>> 8fd5b5a99572b22a28d652b797946d5517e5c563
}
