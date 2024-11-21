#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array from chars
 * @size: the size of the array to be created
 * @c: string
 *
 * Return: NUll if size = 0
 * else pointer to the array created
*/

char *create_array(unsigned int size, char c)
{
char *str;
unsigned int i;

if (size == 0)
{
return (NULL);
}

str = malloc(sizeof(*str) * size);
if (str == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
str[i] = c;
}
return (str);
}
