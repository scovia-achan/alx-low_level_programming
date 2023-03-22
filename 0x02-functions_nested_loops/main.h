#ifndef _MAIN_H_
#define _MAIN_H_

/**
 * _putchar - writes a character to stdio
 * Return: 1
 */

int _putchar(char c);

/**
 * print_alphabet - prints letters of the alphabet
 * Return: 0 or 1
 */
 
void print_alphabet(void);

/**
 * void print_print_alphabet_x10(void) - prints alphabet letter ten times
 *
 * Return: always 0
 */

void print_alphabet_x10(void);

/**
 * _islower(int c) - prints 1 if number is lower case
 *
 * Return: Always 0 or 1
 */

int _islower(int c);

/**
 * _isalpha(int c) - checks if letter is alphabet then appends 1
 *
 * Return: Always 1 or 0
 */

int _isalpha(int c);

/**
 * add(int, int) - add two numbers
 *
 * Return: returns sum
 */

int add(int, int);

/**
 * print_last_digit - prints the last digit of a number
 *
 * Return: Always 0
 */

int print_last_digit(int);

/**
 * _abs - prints absolute value of a digit
 *
 * Return: absolute value
 */

int _abs(int);

/**
 * print_sign - return sign
 *
 * Return: return sign
 */

int print_sign(int n);

/**
 * jack_bauer - prints every minute of a day
 *
 * Return: returns 0
 */

void jack_bauer(void);
#endif
