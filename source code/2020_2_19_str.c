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

void custom_put(const char* str)	// putchar �� �̿��ؼ� puts�� �����϶�. �� \n�� ����
{
	/*str ++ ��Ű�鼭 *str�� ����ϸ� �ǰ���?
		���Ͱ� ������ ���ۿ��� ���������Բ�.*/
	while (*str)
	{
		putchar(*(str++));
	}


}