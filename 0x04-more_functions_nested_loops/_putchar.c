<<<<<<< HEAD
#include "main.h
#include <unistd.h>
/**
 *_putchar-write the character c to stdout
 @c: The character to print
*
* Return:On success 1.
* On error,-1 is return,and error is set appropriatly.
*/
int _putchar(char c)
{
	return(write(1,&c,1));
}
=======
#include "main.h"
#include <unistd h>
/**
 * _putchar-write the character c to stdout
 * @c: The character to point
 *
 * Return:On success 1.
 * On error,-1 is returned,and error is set appropriately.
 */
int _putchar(char)
{
	return(write(1,&c, 1));
>>>>>>> 5b7567a28d5bc703a0662c77fdafb03a54989650
