#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdbool.h>
#include<float.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

void count()
{
	int ct = 0;
	printf("count = %d\n", ct);
	ct++;
	printf("count = %d\n", ct);

}

int main(void)
{
	int count_m = 0;
	while (1)
	{
		count();
		count_m++;
		if (count_m == 70000)
			goto end;
	}
end:
	return 0;

}














//int g_i = 123;			//	file 영역(file scope(global variable)) (모든 함수의 바깥)
//int g_j;
//
//void func1()
//{
//	g_i++;
//	{
//
//	}
//}
//
//int main(void)
//{
//
//	printf("%d", g_j);
//
//}


//
//int main(int argc, char*argv[])
//{
//	if (argc < 3)
//		printf("Wrong Usage of %s\n", argv[0]);
//	else
//	{
//		/*int times = atoi(argv[1]);
//
//		for (int i = 0; i < times; i++)
//			puts(argv[2]);*/
//
//		printf("Sum = %d\n", atoi(argv[1]) + atoi(argv[2]));
//	}
//
//	/*char str1[] = "1024Hello";
//	char* end;
//	long l = strtol(str1, &end, 10);
//	printf("%s %ld %s %d\n", str1, l, end, (int)*end);
//*/
//	
//	char temp[100];
//	
//	sprintf(temp, "%x", 10);
//	puts(temp);
//
//
//
//	return 0;
//
//}