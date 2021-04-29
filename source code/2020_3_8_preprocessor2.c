#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int main()
{
	int dat[2][3][2] = { { {1,2},{3,4},{5,6} },{ {7,8},{9,10},{11,12} } };
	int(*p1)[3][2] = dat;

	printf("%d", *(**p1+1));

	return 0;
}

















//#define ADD1(X,Y) X + Y
//#define ADD2(X,Y) ((X)+(Y))
//#define SQUARE(X) X*X
//
//int main()
//{
//	int sqr = SQUARE(3);
//
//	int a = 1;
//
//	printf("%d\n", 2 * ADD1(1, 3));
//	printf("%d\n", 2 * ADD2(1, 3));
//
//	printf("%d\n", SQUARE(1 + 2));
//	printf("%d\n", 100 / SQUARE(3 + 1));
//	printf("%d\n", SQUARE(++a));
//
//	return 0;
//}