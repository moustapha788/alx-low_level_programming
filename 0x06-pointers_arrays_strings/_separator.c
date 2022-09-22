#include "main.h"


/* more headers goes there */

/**
 * separator - check if is a separtor
 * space, tabulation, new line, ,, ;, ., !, ?, ", (, ), {, and }
 *
 *@c: a char
 * Return: 1 if is separator 0 else
 */
int separator(char c)
{
	if (c == ' ' || c == '\t' || c == '\n' ||
	 c == ',' || c == ';' || c == '.' || c == '!' ||
	 c == '?' || c == '"' || c == '(' || c == ')' ||
	 c == '{' || c == '}')
	{
		return (1);
	}

	return (0);
}
