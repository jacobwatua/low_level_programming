#include <stdio.h>
/**
 * main - print the number of commandline arguments
 * @argc:  number of args
 * @argv:  command line arguments
 *
 * Return: 0
*/

int main(int argc, char *argv[])
{
(void) argv;
printf("%d\n", argc - 1);
return (0);
}

