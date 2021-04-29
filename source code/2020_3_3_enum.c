#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdbool.h>


struct cat {
	int i;
	double d;
};

struct cat cat = {
	.i = 3,
	.d = 5.3
};

int main()
{
	printf("%d %.2lf", cat.i, cat.d);
	return 0;
}





//열거형 연습문제
//enum spectrum {red,orange,yellow,green,blue};
//const char* colors[] = { "red","orange","yellow","green","blue" };
//
//#define LEN 30
//
//int main()
//{
//	char choice[LEN] = { 0, };
//	enum specturm color;
//	bool color_is_found = false;
//
//	while (1)
//	{
//		printf("Input a color name (empty line to quit) : \n");
//		if (scanf("%[^\n]%*c", choice) != 1)
//			break;
//
//		if (strcmp(choice, colors[red]) == 0)
//			printf("%s %s\n", colors[red], "apple");
//
//		else if (strcmp(choice, colors[orange]) == 0)
//			printf("%s %s\n", colors[orange], "juice");
//
//		else if (strcmp(choice, colors[yellow]) == 0)
//			printf("%s %s\n", colors[yellow], "banana");
//
//		else if (strcmp(choice, colors[green]) == 0)
//			printf("%s %s\n", colors[green], "tea");
//
//		else if (strcmp(choice, colors[blue]) == 0)
//			printf("%s %s\n", colors[blue], "sky");
//		else
//			printf("Input other color\n");
//	}
//
//}

//유용한 익명공용체 예제
//struct vector2D {
//	union {
//		struct { double x, y; };
//		struct { double i, j; };
//		struct { double arr[2]; };
//	};
//};
//
//typedef struct vector2D vec2;
//
//vec2 v1 = { 3.14,1.592 };
//
//int main(void)
//{
//	printf("%.2lf %.3lf\n", v1.x, v1.y);
//	printf("%.2lf %.3lf\n", v1.i, v1.j);
//	printf("%.2lf %.3lf\n", v1.arr[0], v1.arr[1]);
//	return 0;
//}


//공용체 예제(anonymous union)
//struct personal_owner {
//	char rr1[7];
//	char rr2[8];
//};
//
//struct company_owner {
//	char crn1[4];
//	char crn2[3];
//	char crn3[6];
//};
//
//struct car_data {
//	char model[15];
//	int status;	// 0 = personal, 1 = company.
//	union {
//		struct personal_owner po;
//		struct company_owner co;
//	};
//};
//
//void print_car(struct car_data car)
//{
//	printf("---------------------------------\n");
//	
//	printf("Car model : %s\n", car.model);
//	if (car.status == 0)
//		printf("Personal owner : %s-%s\n", car.po.rr1, car.po.rr2);
//	else
//		printf("Company owner : %s-%s-%s\n", car.co.crn1, car.co.crn2, car.co.crn3);
//	
//	printf("---------------------------------\n");
//}
//
//
//int main(void)
//{
//	struct car_data my_car = {
//		.model = "Rolls-royce",
//		.status = 0,
//		.po = {"971212","1474411"}
//	};
//
//	struct car_data company_car = {
//		.model = "Bugatti",
//		.status = 1,
//		.co = {"aaa","bd","ccfdaa"}
//	};
//
//	print_car(my_car);
//	print_car(company_car);
//
//
//	return 0;
//}