#include<stdio.h>
int one_three();
int two();
int main(void)
{
	printf("starting now:\n");
	one_three();
	printf("done!");

	return 0;
}

int one_three(void)
{
	printf("one\n");
	two();
	printf("\n");
	printf("three\n");

	return 0;
}

int two(void)
{
	printf("two");

	return 0;
}