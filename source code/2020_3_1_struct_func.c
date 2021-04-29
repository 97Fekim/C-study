#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define NLEN 30

struct name_count {
	char first[NLEN];
	char last[NLEN];
	int num;
};

struct name_count receive_input();
struct name_count count_characters(struct name_count);
void show_result(const struct name_count);

int main(void)
{
	struct name_count user_name;

	user_name = receive_input();
	user_name = count_characters(user_name);
	show_result(user_name);

	return 0;
}

struct name_count receive_input(void)
{
	struct name_count input;
	int flag;

	printf("Input Your first name\n>>");
	flag = scanf("%[^\n]%*c", input.first);
	if (flag != 1)
		printf("Wrong Input");

	printf("Input Your first name\n>>");
	flag = scanf("%[^\n]%*c", input.last);
	if (flag != 1)
		printf("Wrong Input");
	
	return input;
}

struct name_count count_characters(struct name_count input)
{
	input.num = strlen(input.first) + strlen(input.last);
	return input;
}

void show_result(const struct name_count output)
{
	printf("Hi %s %s, Your name's character is %d",
		output.first, output.last, output.num);
}