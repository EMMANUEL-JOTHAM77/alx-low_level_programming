#include"main.h"
#include<stdio.h>

/**
 * _isdigit-untion to check 0-9
 *
 * @c: checks input of function
 *
 * Return: returns 1if 'c'is digit
 * otherwise always 0 (Success)
 */
 int _isdigit(int c)
{
	if (c >= 48 && c <=57)
		return (1);
			return (0);
}
