#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdbool.h>
#include<float.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

void fit_str(char* str, unsigned int i);

int main(void)
{
	/*char msg[] = "Just,"" do it!";
	puts(msg);
	printf("Length %d\n", strlen(msg));
	fit_str(msg, 4);
	puts(msg);
	printf("Length %d\n", strlen(msg));*/

	/*char str1[100] = "Fisrt string";
	char str2[] = "Second string";

	strcat(str1, ",");
	strncat(str1, str2, 2);
	puts(str1);*/

	/*printf("%d\n", strcmp("A", "A"));
	printf("%d\n", strcmp("A", "B"));
	printf("%d\n", strcmp("B", "A"));
	printf("%d\n", strcmp("Banana", "Bananas"));
	printf("%d\n", strcmp("Bananas", "Banana"));
	printf("%d\n", strncmp("Bananas", "Banana",6));*/

	/*char dest[100] = "";
	char source[] = "Start programming";
	strcpy(dest, source);
	strncpy(dest, source, 5);
	puts(dest);
	*/

	char str[100] = "";
	int i = 123;
	double d = 3.14;

	sprintf(str, "%05d.png %f", i, d);


	return 0;

}

//void fit_str(char* str, unsigned int i)
//{ 
//
//	if (strlen(str) > i)
//		//*(str + i) = NULL;
//		str[i] = NULL;
//	puts(str);
//	
//}