#include <unistd.h>



/**
<<<<<<< HEAD

 * _putchar - writes the character c to stdout

 * @c: The character to print

 *

 * Return: On success 1.

 * On error, -1 is returned, and errno is set appropriately.

 */
=======
 *
 *  * _putchar - writes the character c to stdout
 *
 *   * @c: The character to print
 *
 *    *
 *
 *     * Return: On success 1.
 *
 *      * On error, -1 is returned, and errno is set appropriately.
 *
 *       */
>>>>>>> 9c06a5f8e0ec9d576768b949c9a995a3986e5c4e

int _putchar(char c)

{

<<<<<<< HEAD
  return (write(1, &c, 1));

=======
	  return (write(1, &c, 1));

}
>>>>>>> 9c06a5f8e0ec9d576768b949c9a995a3986e5c4e
