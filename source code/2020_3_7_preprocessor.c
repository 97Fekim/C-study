#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define SAY_HELLO printf("Hello World\n");
#define MESSAGE "I'm sure! but it may be some \
dangerous thing."
#define FORMAT "number is %d"
#define T_T_SAY_HELLO for(int i = 0; i < 10; ++i) printf("Hello world\n");
#include<limits.h>
#include<float.h>


int main()
{
	float min = FLT_TRUE_MIN;
	printf("%e\n\n", min);
	min /= 2.0f;
	printf("%e\n\n", min);

	;
	return 0;
}