#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdbool.h>
#include<float.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define MONTHS 12
#define year_count 3

double year_average(double year[]);
double month_average(double year[],int m);

int main(void)
{

	double year[year_count][MONTHS] = { { -3.2,0.2,7.0,14.1,19.6,23.6,26.2,28.0,23.1,16.1,6.8,1.2 }
							, { -1.8,-0.2,6.3,13.9,19.5,23.3,26.9,25.9,22.1,16.4,5.6,-1.9 }
							, { -4.0,-1.6,8.1,13.0,18.2,23.1,27.8,28.8,21.5,13.1,7.8,-0.6 } };

	printf("[Temperature Data]\n");
	printf("Year index :\t");
	for (int k = 1; k < MONTHS + 1; ++k)
		printf("%-7d", k);

	printf("\n");

	for (int j = 0; j < year_count; ++j)
	{
		printf("year %-6d:\t", j);
		for (int i = 0; i < MONTHS; ++i)
			printf("%-6.1f ", year[j][i]);

		printf("\n");
	}

	printf("\n");

	//-----------------------------------

	printf("[Yearly average temperatures of 3years]\n");
	for (int i = 0; i < year_count; ++i)
		printf("Year %d : average temperature = %.1f\n", i, year_average(year[i]));

	printf("\n");


	//-----------------------------------

	printf("[Monthly average temperature for 3years]\n");

	printf("Year index :\t");
	for(int i = 1;i<MONTHS+1;++i)
		printf("%-7d", i);

	printf("\n");
	printf("Avg temps  :\t");
	for (int i = 0; i < MONTHS; ++i)
	{
		double sum = 0;
		double average = 0;
		
		for (int j = 0; j < year_count; ++j)
		{
			sum += year[j][i];
		}
		average = sum / year_count;
		printf("%-6.1f ", average);

	}

	printf("\n");

	return 0;

}

double year_average(double year[])
{
	double sum = 0;
	for (int i = 0; i < MONTHS; ++i)
		sum += year[i];

	return (sum / MONTHS);

}
