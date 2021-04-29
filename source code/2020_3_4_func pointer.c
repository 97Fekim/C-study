#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>






//	qsort  예제
//int compare(const void* first, const void* second)
//{
//	if (*(int*)first > * (int*)second)
//		return 1;
//	else if (*(int*)first < *(int*)second)
//		return -1;
//	else
//		return 0;
//}
//
//
//int main()
//{
//	int arr[] = { 8,2,5,3,6,11 };
//	int n = sizeof(arr) / sizeof(arr[0]);
//
//	qsort(arr, n, sizeof(n), compare);
//
//	for (int i = 0; i < n; ++i)
//		printf("%d\n",arr[i]);
//
//	return 0;
//}

//struct kid
//{
//	char name[100];
//	int height;
//};
//
//int compare(void* first, void* second);
//
//int main()
//{
//	struct kid my_home[] = {
//	"father",172,
//	"mother",155,
//	"me",172,
//	"sister",162
//	};
//
//	const int n = sizeof(my_home) / sizeof(my_home[0]);
//
//	qsort(my_home, n, sizeof(struct kid), compare);
//
//	for (int i = 0; i < n; ++i)
//		printf("%s\t%d\n", my_home[i].name, my_home[i].height);
//
//	return 0;
//}
//
//int compare(void* first, void* second)
//{
//	if (((struct kid*)first)->height > ((struct kid*)second)->height)
//		return 1;
//	else if (((struct kid*)first)->height < ((struct kid*)second)->height)
//		return -1;
//	else
//		return 0;
//}
//


//함수 포인터 예제
//void ToUpper(char* str)
//{
//	while (*str)
//	{
//		*str = toupper(*str);
//		str++;
//	}
//}
//
//void ToLower(char* str)
//{
//	while (*str)
//	{
//		*str = tolower(*str);
//		str++;
//	}
//}
//
//void UpdateString(char* str, int(*pf)(int))
//{
//	while (*str)
//	{
//		*str = (*pf)(*str);
//		str++;
//	}
//
//}
//
//
//int main(void)
//{
//	char str[] = "Hello World";
//
//	void (*pf)(char*);
//
//	//pf = ToUpper;
//
//	//printf("String literal %lld\n", (long long)("Hello, world!"));
//	//printf("Function pointer %lld\n", (long long)ToUpper);
//	//printf("variable %lld\n", (long long)str);
//
//	//(*pf)(str);
//
//	//printf("ToUpper %s\n", str);
//
//	//pf = ToLower;
//
//	//(*pf)(str);
//
//	//printf("ToLower %s\n", str);
//
//	pf = tolower;
//	UpdateString(str, pf);
//
//	printf("%s",str);
//	
//	return 0;
//}