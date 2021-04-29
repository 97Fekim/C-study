#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#define MAX 41
typedef struct
{
	char name[MAX];
	int age;
	float height;
}person;


int main(void)
{
	int flag;

	struct person2 {
		char name[MAX];
		int age;
		float height;
	};

	person A;
	
	strcpy(A.name, "Miracle");
	A.age = 30;
	A.height = 180.0f;

	person BG = { "Miracle",30,180.0f };
	person SC = {
		"Chulgu",
		30,
		172
	};

	struct person2 beauty = {
		.age = 19,
		.name = "gaag",
		.height = 131.2f
	};

	struct person * ptr_person;
	ptr_person = &BG;

	printf("%s %d %f\n", BG.name, BG.age, BG.height);
	printf("%s %d %f\n", ptr_person->name, ptr_person->age, ptr_person->height);
	printf("%s %d %f\n", (*ptr_person).name, (*ptr_person).age, (*ptr_person).height);

	struct {
		char farm[MAX];
		float price;	
	} apple1, apple2;


	return 0;

}