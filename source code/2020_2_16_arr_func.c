#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdbool.h>
#include<float.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* ptr = arr;

	printf("%d", *ptr);

	return 0;
}