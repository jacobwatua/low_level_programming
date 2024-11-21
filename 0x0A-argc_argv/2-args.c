#include <stdio.h>
/**
 * main - print the all commandline arguments passed
 * @argc:  number of args
 * @argv:  command line arguments
 *
 * Return: 0
*/

int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}

