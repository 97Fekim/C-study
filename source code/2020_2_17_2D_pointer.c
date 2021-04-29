#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdbool.h>
#include<float.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define ROWS 3
#define COLS 4


int main(void)
{
	/*float arr2d[2][4] = { {1.0f,2.0f,3.0f,4.0f},{5.0f,6.0f,7.0f,8.0f} };

	printf("%u\n", (unsigned)arr2d);
	printf("%u\n", (unsigned)arr2d[0]);
	printf("\n");

	printf("%u\n",(unsigned)*arr2d);
	printf("%u\n", (unsigned)&arr2d[0]);
	printf("%u\n", (unsigned)&arr2d[0][0]);
	printf("%.1f %.1f\n", arr2d[0][0], **arr2d);
	printf("\n");

	printf("%u\n", (unsigned)(arr2d + 1));
	printf("%u\n", (unsigned)(&arr2d[1]));
	printf("%u\n", (unsigned)(arr2d[1]));

	printf("%f\n", *(*(arr2d + 1) + 2));
	printf("\n");

	for (int j = 0; j < 2; ++j)
	{
		printf("[%d] = %u, %u\n", j, (unsigned)(arr2d[j]), (unsigned)*(arr2d + j));

		for (int i = 0; i < 4; ++i)
		{
			printf("[%d][%d] = %.0f,%.0f\n", j, i, arr2d[j][i], *(*(arr2d + j) + i));

			*(*(arr2d + j) + i) += 1.0f;
		}
		printf("\n");

	}

	float arr2d[2][4] = { {1.0f,2.0f,3.0f,4.0f},{5.0f,6.0f,7.0f,8.0f} };
	float(*pa)[4];
	float* ap[2];

	const int** pp2;
	int* p1;
	const int n = 13;

	pp2 = &p1;
	*pp2 = &n;
	*p1 = 10;*/

	int data[ROWS][COLS] = {
								{1,2,3,4},
								{5,6,7,8},
								{9,0,1,2}
											};
	printf("%d\n", data[2][3]);
	int* ptr = &data[0][0];
	printf("%d\n", *(ptr + 3 + COLS * 2));
	

	return 0;
}

