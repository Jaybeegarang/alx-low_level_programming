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

	printf("Size of char:%lu bytes(s)\n", (unsigned long)sizeof(c));
	printf("Size of int: %lu bytes(s)\n", (unsigned long)sizeof(i));
	printf("Size of long int: %lu bytes(s)\n", (unsigned long)sizeof(li));
	printf("Size of long long int: %lu bytes(s)\n", (unsigned long)sizeof(ill));
	printf("Size of float: %lu bytes(s)\n", (unsigned long)sizeof(f));
}
