#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdbool.h>
#include<float.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define TEST :"A string from #define"

void custom_put(const char* str);
int custom_put2(const char* str);


int main(void)
{
	char str[] = "ABCDEFG";
	custom_put(str);

	return 0;
}

void custom_put(const char* str)	// putchar 을 이용해서 puts를 구현하라. 단 \n는 제외
{
	/*str ++ 시키면서 *str을 출력하면 되겠찌?
		엔터가 들어오면 버퍼에서 빠져나오게끔.*/
	while (*str)
	{
		putchar(*(str++));
	}


}