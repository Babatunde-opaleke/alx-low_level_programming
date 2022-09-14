
Baba Tee@DESKTOP-PJLAMJR MINGW64 ~
$ cd alx-low_level_programming

Baba Tee@DESKTOP-PJLAMJR MINGW64 ~/alx-low_level_programming (master)
$ cd 0x02-functions_nested_loops

Baba Tee@DESKTOP-PJLAMJR MINGW64 ~/alx-low_level_programming/0x02-functions_nested_loops (master)
$ ls
README.md  main.h

Baba Tee@DESKTOP-PJLAMJR MINGW64 ~/alx-low_level_programming/0x02-functions_nested_loops (master)
$ cat > _putchar
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
}


Baba Tee@DESKTOP-PJLAMJR MINGW64 ~/alx-low_level_programming/0x02-functions_nested_loops (master)
$ chmod u+x _putchar

Baba Tee@DESKTOP-PJLAMJR MINGW64 ~/alx-low_level_programming/0x02-functions_nested_loops (master)
$ ls
README.md  _putchar  main.h

Baba Tee@DESKTOP-PJLAMJR MINGW64 ~/alx-low_level_programming/0x02-functions_nested_loops (master)
$ cat > 0-putchar.c
#include "main.h"

/**
 * main - print putchar
 * Return: always 0
 */

int main(void)
{
        _putchar('_');
        _putchar('p');
        _putchar('u');
        _putchar('t');
        _putchar('c');
        _putchar('h');
        _putchar('a');
        _putchar('r');
        _putchar('\n');

        return (0);

}


Baba Tee@DESKTOP-PJLAMJR MINGW64 ~/alx-low_level_programming/0x02-functions_nested_loops (master)
$ chmod u+x 0-putchar.c

Baba Tee@DESKTOP-PJLAMJR MINGW64 ~/alx-low_level_programming/0x02-functions_nested_loops (master)
$ ls
0-putchar.c  README.md  _putchar  main.h

Baba Tee@DESKTOP-PJLAMJR MINGW64 ~/alx-low_level_programming/0x02-functions_nested_loops (master)
$ cat > 1-alphabet.c
#include "main.h"
/**
 * print_alphabet - function to print abc
 *
 * Return: 0
 */
void print_alphabet(void)
{
        char c;

        for (c = 'a'; c <= 'z'; c++)
        {
                _putchar(c);
        }
_putchar('\n');
}


Baba Tee@DESKTOP-PJLAMJR MINGW64 ~/alx-low_level_programming/0x02-functions_nested_loops (master)
$ chmod u+x 1-alphabet.c

Baba Tee@DESKTOP-PJLAMJR MINGW64 ~/alx-low_level_programming/0x02-functions_nested_loops (master)
$ ls
0-putchar.c  1-alphabet.c  README.md  _putchar  main.h

Baba Tee@DESKTOP-PJLAMJR MINGW64 ~/alx-low_level_programming/0x02-functions_nested_loops (master)
$ cat > 2-print_alphabet_x10.c
#include "main.h"
/**
 * print_alphabet_x10 - function to print abc 10 times
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
        char c, i;

        for (i = 0; i <= 9; i++)
        {
                for (c = 'a'; c <= 'z'; c++)
                {
                        _putchar(c);
                }
                _putchar('\n');
        }
}


Baba Tee@DESKTOP-PJLAMJR MINGW64 ~/alx-low_level_programming/0x02-functions_nested_loops (master)
$ chmod u+x 2-print_alphabet_x10.c

Baba Tee@DESKTOP-PJLAMJR MINGW64 ~/alx-low_level_programming/0x02-functions_nested_loops (master)
$ cat > 3-islower.c
#include "main.h"
/**
 * _islower - function to check for lowercase character
 * @c:  is the int that will use for the argument of the function
 * Return: 0
 */
int _islower(int c)
{
        if (c >= 'a' && c <= 'z')
        {
                return (1);
        }
        else
                return (0);
}


Baba Tee@DESKTOP-PJLAMJR MINGW64 ~/alx-low_level_programming/0x02-functions_nested_loops (master)
$ chmod u+x 3-islower.c

Baba Tee@DESKTOP-PJLAMJR MINGW64 ~/alx-low_level_programming/0x02-functions_nested_loops (master)
$ ls
0-putchar.c   2-print_alphabet_x10.c  README.md  main.h
1-alphabet.c  3-islower.c             _putchar

Baba Tee@DESKTOP-PJLAMJR MINGW64 ~/alx-low_level_programming/0x02-functions_nested_loops (master)
$ cat > 4-isalpha.c
#include "main.h"
/**
 * _isalpha - function to check if c is a letter, lowercase or uppercase
 * @c: is the int that will use for the argument of the function
 * Return: 0
 */
int _isalpha(int c)
{
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        {
        return (1);
        }
        else
        return (0);
}


Baba Tee@DESKTOP-PJLAMJR MINGW64 ~/alx-low_level_programming/0x02-functions_nested_loops (master)
$ chmod u+x 4-isalpha.c

Baba Tee@DESKTOP-PJLAMJR MINGW64 ~/alx-low_level_programming/0x02-functions_nested_loops (master)
$ ls
0-putchar.c   2-print_alphabet_x10.c  4-isalpha.c  _putchar
1-alphabet.c  3-islower.c             README.md    main.h

Baba Tee@DESKTOP-PJLAMJR MINGW64 ~/alx-low_level_programming/0x02-functions_nested_loops (master)
$ cat > 5-sign.c
#include "main.h"
/**
 * print_sign - function to check for a sign of a number
 * @n:  is the int that will use for the argument of the function
 * Return: 0
 */
int print_sign(int n)
{
        if (n > 0)
        {
        _putchar('+');
        return (1);
}
        else if (n < 0)
        {
        _putchar('-');
        return (-1);
        }
        else
        {
        _putchar('0');
        return (0);
        }
}


Baba Tee@DESKTOP-PJLAMJR MINGW64 ~/alx-low_level_programming/0x02-functions_nested_loops (master)
$ chmod u+x 5-sign.c

Baba Tee@DESKTOP-PJLAMJR MINGW64 ~/alx-low_level_programming/0x02-functions_nested_loops (master)
$ cat > 6-abs.c
#include "main.h"
#include <stdio.h>
/**
 * _abs - function that computes the absolute value of an integer
 * @c:  is the int that will use for the argument of the function
 * Return: 0
 */
int _abs(int c)
{
        if (c > 0 || c == 0)
        {
        return (c);
        }
        else
        return (c * -1);
}


Baba Tee@DESKTOP-PJLAMJR MINGW64 ~/alx-low_level_programming/0x02-functions_nested_loops (master)
$ chmod u+x 6-abs.c

Baba Tee@DESKTOP-PJLAMJR MINGW64 ~/alx-low_level_programming/0x02-functions_nested_loops (master)
$ cat > 7-print_last_digit.c
#include "main.h"

/**
 *print_last_digit - Prints the last digit of a number.
 *@n: The number in question.
 *
 *Return: Value of the last digit.
 */
int print_last_digit(int n)
{
        int last_digit = n % 10;

        if (last_digit < 0)
                last_digit *= -1;

        _putchar(last_digit + '0');

        return (last_digit);
}


Baba Tee@DESKTOP-PJLAMJR MINGW64 ~/alx-low_level_programming/0x02-functions_nested_loops (master)
$ chmod u+x 7-print_last_digit.c

Baba Tee@DESKTOP-PJLAMJR MINGW64 ~/alx-low_level_programming/0x02-functions_nested_loops (master)
$ cat > 8-24_hours.c
#include "main.h"
/**
 * jack_bauer - func that prints every minute of the day of Jack Bauer, starti
 * n from 00:00 to 23:59, min loop counts mins, while hour loop counts hours
 * and resets mins
 * Return: 0
 */
void jack_bauer(void)
{
        int hours = 0;
        int minutes = 0;
        int hours_remainder;
        int mins_remainder;

        while (hours <= 23)
        {
        while (minutes <= 59)
        {
        mins_remainder = minutes % 10;
        hours_remainder = hours % 10;
        _putchar(hours / 10 + '0');
        _putchar(hours_remainder + '0');
        _putchar(':');
        _putchar(minutes / 10 + '0');
        _putchar(mins_remainder + '0');
        minutes++;
        _putchar('\n');
        }
        hours++;
        minutes = 0;
}
}


Baba Tee@DESKTOP-PJLAMJR MINGW64 ~/alx-low_level_programming/0x02-functions_nested_loops (master)
$ chmod u+x 8-24_hours.c

Baba Tee@DESKTOP-PJLAMJR MINGW64 ~/alx-low_level_programming/0x02-functions_nested_loops (master)
$ cat > 9-times_table.c
#include "main.h"

/**
 *times_table - Prints the 9 times table, starting with 0.
 */
void times_table(void)
{
        int num, mult, prod;

        for (num = 0; num <= 9; num++)
        {
                _putchar('0');

                for (mult = 1; mult <= 9; mult++)
                {
                        _putchar(',');
                        _putchar(' ');

                        prod = num * mult;

                        if (prod <= 9)
                                _putchar(' ');
                        else
                                _putchar((prod / 10) + '0');

                        _putchar((prod % 10) + '0');
                }
                _putchar('\n');
        }
}


Baba Tee@DESKTOP-PJLAMJR MINGW64 ~/alx-low_level_programming/0x02-functions_nested_loops (master)
$ chmod u+x 9-times_table.c

Baba Tee@DESKTOP-PJLAMJR MINGW64 ~/alx-low_level_programming/0x02-functions_nested_loops (master)
$ cat > 10-add.c
#include "main.h"

/**
 * add - Adds two integers.
 * @num1: The first integer to be added.
 * @num2: The second integer to be added.
 *
 * Return: The result of the addition.
 */
int add(int num1, int num2)
{
        return (num1 + num2);
}


Baba Tee@DESKTOP-PJLAMJR MINGW64 ~/alx-low_level_programming/0x02-functions_nested_loops (master)
$ chmod u+x 10-add.c

Baba Tee@DESKTOP-PJLAMJR MINGW64 ~/alx-low_level_programming/0x02-functions_nested_loops (master)
$ cat > 11-print_to_98.c
#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers from input to 98,
 *               in order separated by a comma followed by a space.
 * @n: The number to begin counting at.
 */
void print_to_98(int n)
{
        if (n >= 98)
        {
                while (n > 98)
                        printf("%d, ", n--);
                printf("%d\n", n);
        }

        else
        {
                while (n < 98)
                        printf("%d, ", n++);
                printf("%d\n", n);
        }
}


Baba Tee@DESKTOP-PJLAMJR MINGW64 ~/alx-low_level_programming/0x02-functions_nested_loops (master)
$ chmod u+x 11-print_to_98.c

Baba Tee@DESKTOP-PJLAMJR MINGW64 ~/alx-low_level_programming/0x02-functions_nested_loops (master)
$ cat > 100-times_table.c
#include "main.h"
/**
*print_times_table - prints the  times table with
*parameter
*@n: parameter
*Return: returns nothing
*/
void print_times_table(int n)
{
int digit, mult, result;
if (n <= 15 && n >= 0)
{
for (digit = 0; digit <= n; digit++)
{
_putchar('0');

for (mult = 1; mult <= n; mult++)
{
_putchar(',');
_putchar(' ');
result = digit * mult;
if (result <= 99)
_putchar(' ');

if (result <= 9)
_putchar(' ');
if (result >= 100)
{
_putchar((result / 100) + '0');
_putchar((result / 10) % 10 + '0');
}
else if (result <= 99 && result >= 10)
{
_putchar((result / 10) + '0');
}
_putchar((result % 10) + '0');
}
_putchar('\n');
}
}
}


Baba Tee@DESKTOP-PJLAMJR MINGW64 ~/alx-low_level_programming/0x02-functions_nested_loops (master)
$ chmod u+x 100-times_table.c

Baba Tee@DESKTOP-PJLAMJR MINGW64 ~/alx-low_level_programming/0x02-functions_nested_loops (master)
$ cat > 102-fibonacci.c
#include <stdio.h>
/**
*main - prints out first 50
*fibonacci suit numbers
*Return: return 0
*/
int main(void)
{
int inc;
unsigned long n1 = 0, n2 = 1, n3;
for (inc = 0; inc < 50; inc++)
{
n3 = n1 + n2;
printf("%lu", n3);
n1 = n2;
n2 = n3;

if (inc == 49)
printf("\n");
else
printf(", ");

}

return (0);
}


Baba Tee@DESKTOP-PJLAMJR MINGW64 ~/alx-low_level_programming/0x02-functions_nested_loops (master)
$ chmod u+x 102-fibonacci.c

Baba Tee@DESKTOP-PJLAMJR MINGW64 ~/alx-low_level_programming/0x02-functions_nested_loops (master)
$ cat > 101-natural.c
#include <stdio.h>
/**
*main - prints count of multiples
*of 3 or 5 below 1024
*Return: return 0
*/
int main(void)
{
int n, sum = 0;
for (n = 0; n < 1024; n++)
{
if ((n % 3) == 0 || (n % 5) == 0)
sum += n;
}
printf("%d\n", sum);
return (0);
}
