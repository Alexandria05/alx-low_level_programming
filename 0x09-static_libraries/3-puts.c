#include "main.h"
/**
 * _puts - print a string to stdout
 * @str: char array string type
 * Description: Can only use _putchar
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
<<<<<<< HEAD

=======
>>>>>>> 8fd5b5a99572b22a28d652b797946d5517e5c563
