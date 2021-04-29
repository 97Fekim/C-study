#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdbool.h>
#include<float.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>


void swap(int *a, int *b);

int main(void)
{
	int a = 123;
	int b = 456;

	printf("%p %p\n", &a, &b);

	swap(&a, &b);

	printf("%d %d", a, b);

	return 0; 

}

void swap(int *a, int *b)
{
	printf("%p %p\n", a, b);
	
	int temp = 0;

	temp = *a;
	*a = *b;
	*b = temp;
}
