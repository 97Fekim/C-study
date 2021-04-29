
//
//void char_to_binary(unsigned char uc)
//{
//	const int bits = CHAR_BIT * sizeof(unsigned char);
//	for (int i = bits - 1; i <= 0; i--)
//		printf("%d", (uc >> i) & 1);
//}
//
//void print_binary(char* data, int bytes)
//{
//	for (int i = 0; i < bytes; ++i)
//		char_to_binary(data[bytes - i - 1]);
//	printf("\n");
//}
//
//int main()
//{
//	struct file_time {
//		unsigned int seconds : 5;	// 32 > 2초당 1비트를 저장.
//		unsigned int minutes : 6;	// 64 > 59분까지 저장가능
//		unsigned int hours	 : 5;	// 32 > 23시 까지 저장.
//	};
//
//	struct file_datr {
//		unsigned int day	: 5;	// 32 > 31일 까지 저장가능
//		unsigned int month	: 4;	// 16 > 12월 까지 저장가능
//		unsigned int year	: 7;	// 128 > 탄생일로부터 127년 후까지 저장가능
//	}fd;
//
//	fd.day = 28;
//	fd.month = 12;
//	fd.year = 8;
//
//	printf("Day %u, Month %u, Year %u\n", fd.day, fd.month, fd.year);
//
//	return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//#include <locale.h>
//#define SIZE 101
//
//int main()
//{
//	setlocale(LC_ALL, ".949");
//	wprintf(L"%c", 176);
//	printf("%c", 176 );
//
//	/*char str[SIZE] = { NULL, };
//	int num = 0;
//	int count = 0;
//
//	scanf("%d", &num);
//	
//	for (int i = 0; i < num; ++i)
//	{
//		scanf("%s", str);
//
//		int len = strlen(str);
//		
//		count++;
//
//		if (len >= 3) 
//		{
//			for (int j = 2; j < len; ++j)
//			{
//				for (int k = 0; k <= j-2; ++k)
//				{
//					if ((str[j] == str[k]) && (str[k] != str[j - 1]))
//					{
//						count--;
//						goto RABLE;
//					}
//				}
//			}
//		}
//	RABLE:;
//	}
//	
//	printf("%d", count);*/
//
//	return 0;
//}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char str[10];
	scanf("%s", str);
	printf("%s\n", str);

	return 0;
}
