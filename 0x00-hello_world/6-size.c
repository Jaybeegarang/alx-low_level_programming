#include<stdio.h>
/**
 * main-print sizes
 * Description: prints sizes of various types
 * Return: size of various types
 */
int main(void)
{
	char c;
	int i;
	long int li;
	long long int ill;
	float f;

	printf("Size of a char: %lu bytes(s)\n", (unsigned long)sizeof(c));
	printf("Size of an int: %lu bytes(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %lu bytes(s)\n", (unsigned long)sizeof(li));
	printf("Size of a long long int: %lu bytes(s)\n", (unsigned long)sizeof(ill));
	printf("Size of a float: %lu bytes(s)\n", (unsigned long)sizeof(f));
}
