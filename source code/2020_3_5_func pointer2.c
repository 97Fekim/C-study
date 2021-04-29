#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>


unsigned char to_decimal(const char bi[]);
void print_binary(const unsigned char num);

int main()
{
	unsigned char i = to_decimal("01000110");
	unsigned char mask = to_decimal("00000101");

	print_binary(i);
	print_binary(mask);
	print_binary(i & mask);

	return 0;
}

unsigned char to_decimal(const char bi[])
{
	const size_t bits = strlen(bi);
	unsigned char sum = 0;

	for (size_t i = 0; i < bits; ++i)
	{
		if (bi[i] == '1')
			sum += (int)pow(2, bits - 1 - i);
		else if (bi[i] != '0')
		{
			printf("Wrong character : %c", bi[i]);
			exit(EXIT_FAILURE);
		}
	}
	return sum;
}

void print_binary(unsigned char num)
{
	const size_t n_bits = sizeof(num) * 8;
	bool bit = false;

	for (size_t i = 0; i < n_bits; ++i)
	{
		const unsigned char mask = (unsigned char)pow(2, n_bits-i-1);
		bit = (num & mask) == mask ? 1 : 0;
		printf("%d", bit);
	}
	printf("\n");
}






//함수포인터 연습문제
////void update_string(char* str, int(*pf)(int));
//void ToUpper(char* str);
//void ToLower(char* str);
//void Transpose(char* str);
//
//int main()
//{
//	int options[] = { 1,2,3 };
//	int n = sizeof(options) / sizeof(int);
//
//	typedef void(*FUNC_TYPE)(char*);
//	FUNC_TYPE operations[] = { ToUpper,ToLower,Transpose };
//
//	printf("Enter a string\n>>");
//
//	char input[100];
//
//	while (scanf("%[^\n]%*c", input) != 1)
//		printf("Please try again.\n>>");
//
//	int choice = 0;
//
//	while (1)
//	{
//		printf("Select menu\n1. To Upper\t2. To Lower\t3. Transpose");
//		scanf("%d", &choice);
//		
//		for (int i = 0; i < n; ++i)
//		{
//			if (options[i] == choice)
//			{
//				(*(operations[i]))(input);
//			}
//		}
//		break;
//	}
//
//	printf("%s", input);
//
//	return 0;
//}
//
//void ToUpper(char* str)
//{
//	while (*str)
//	{
//		if (islower(*str))
//			*str = toupper(*str);
//		str++;
//	}
//}
//
//void ToLower(char* str)
//{
//	while (*str)
//	{
//		if (isupper(*str))
//			*str = tolower(*str);
//		str++;
//	}
//}
//
//void Transpose(char* str)
//{
//	while (*str)
//	{
//		if (islower(*str))
//			*str = toupper(*str);
//		else if (isupper(*str))
//			*str = tolower(*str);
//
//		str++;
//	}
//}