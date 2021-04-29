#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#define SLEN 101

struct book {
	char name[SLEN];
	char author[SLEN];
};

void print_books(const struct book* books, int n);
void write_books(const char* filename, const struct book* books, int n);
//struct book* read_books(const char* filename, int* n);
void read_books2(const char* filename, struct book** books_dptr, int* n);

int main()
{
	int temp;
	int n = 3;

	struct book* my_books = (struct book*)malloc(sizeof(struct book) * n);
	if (!my_books) {
		printf("Malloc failed");
		exit(EXIT_FAILURE);
	}

	my_books[0] = (struct book){ "The Great Gatsby","F. Scott Fitzgerald" };
	my_books[1] = (struct book){ "The Selfish gene","Richard Dawkins" };
	my_books[2] = (struct book){ "The Odyssey","Homer" };

	print_books(my_books, n);

	printf("\nWriting to a file.\n");
	write_books("books.dat", my_books, n);
	free(my_books);
	n = 0;
	printf("Done.\n");

	printf("\nPress any key to read data from a file.\n\n")
;
	temp = _getch();

	read_books2("books.dat",&my_books,&n);

	print_books(my_books, n);
	free(my_books);
	n = 0;

	return 0;
}

void print_books(const struct book* books, int n)
{
	for (int i = 0; i < n; ++i)
		printf("Book %d : %s - %s -\n", i + 1, books[i].name, books[i].author);
}

void write_books(const char* filename, const struct book* books, int n)
{
	FILE* fp = NULL;
	fp = fopen(filename, "wb");
	if(!fp)
	{
		printf("Error!");
		exit(EXIT_FAILURE);
	}

	fwrite(&n,sizeof(int),1,fp);


	fwrite(books, sizeof(struct book), n, fp);
	
		
	fclose(fp);
}

//struct book* read_books(const char* filename, int* n)
//{
//	FILE* fp = NULL;
//	fp = fopen(filename, "r");
//	if (!fp)
//	{
//		printf("Error!");
//		exit(EXIT_FAILURE);
//	}
//	int flag;
//	flag = fscanf(fp, "%d%*c", n);
//
//	struct book* my_books = (struct book*)calloc(sizeof(struct book), *n);
//
//	if (!my_books)
//	{
//		printf("Lo");
//		exit(EXIT_FAILURE);
//	}
//
//	for (int i = 0; i < *n; ++i)
//	{
//		fscanf(fp, "%[^\n]%*c%[^\n]%*c", my_books[i].name, my_books[i].author);
//	}
//	fclose(fp);
//
//	return my_books;
//}

void read_books2(const char* filename, struct book** books_dptr, int* n)
{
	FILE* fp = NULL;
	fp = fopen(filename, "rb");
	if (!fp)
	{
		printf("Error!");
		exit(EXIT_FAILURE);
	}
	int flag;
	flag = fread(n, sizeof(n), 1, fp);

	struct book* my_books = (struct book*)calloc(sizeof(struct book), *n);

	if (!my_books)
	{
		printf("Lo");
		exit(EXIT_FAILURE);
	}

	
	fread(my_books, sizeof(struct book), n, fp);

	fclose(fp);

	*books_dptr = my_books;
}




//구조체 배열 함수
//struct book
//{
//	char name[SLEN];
//	char author[SLEN];
//};
//
//void print_books(const struct book* my_books);
//
//int main()
//{
//	struct book* my_books = (struct book*)malloc(sizeof(struct book) * arr_size);
//
//	if (!my_books)exit(EXIT_FAILURE);
//
//	my_books[0] = (struct book){ "The Great Gatsby","F. Scott Fitzgerald" };
//	my_books[1] = (struct book){ "The Selfish gene","Richard Dawkins" };
//	my_books[2] = (struct book){ "The Odyssey","Homer" };
//
//	print_books(my_books);
//}
//
//void print_books(const struct book* my_books)
//{
//	for (int i = 0; i < arr_size; ++i)
//	{	
//		printf("Book %d : %s - %s -\n", i, my_books[i].name, my_books[i].author);
//		
//	}
//}

// 복합리터럴
//struct book
//{
//	char title[MAXTITL];
//	char author[MAXAUTL];
//	float price;
//};
//
//struct rectangle
//{
//	double width;
//	double height;
//};
//
//double rect_area(struct rectangle r)
//{
//	return r.width * r.height;
//}
//
//double rect_area_pre(struct rectangle* r)
//{
//	return r->width * r->height;
//}
//
//int main()
//{
//	struct book book_to_read = { "Crime and Punishment", "Fyodor Dostoyevsky",11.25f };
//
//	strcpy(book_to_read.title, "Alice in Wonderland");
//	strcpy(book_to_read.author, "Lewis Carroll");
//	book_to_read.price = 20.3f;
//	//or
//	struct book book_to_read2 = { "Alice in Wonderland" ,"Lewis Carroll",20.3f };
//	book_to_read = book_to_read2;
//	//or
//	book_to_read = (struct book){ "Alice in Wonderland" ,"Lewis Carroll",20.3f };
//
//	struct rectangle rec1 = { 1.0,2.0 };
//	double area = rect_area(rec1);
//	area = rect_area((struct rectangle) { 1.0, 2.0 });
//	area = rect_area_pre(&(struct rectangle) { .height = 4.0, .width = 2.0 });
//	printf("%lf", area);
//}


// 구조체와 할당메모리
//struct namect {
//	char* fname;	// first name.
//	char* lname;	// last name.
//	int letters;	// name character number count.
//};
//
//void getinfo(struct namect*);
//void makeinfo(struct namect*);
//void showinfo(struct namect*);
//void cleanup(struct namect*);
//
//int main(void)
//{
//	struct namect person;
//
//	getinfo(&person);
//	makeinfo(&person);
//	showinfo(&person);
//	cleanup(&person);
//	
//	return 0;
//}
//
//void getinfo(struct namect* person)
//{
//	char buffer[SLEN] = { 0, };
//	printf("Input your first name\n>>");
//	scanf("%[^\n]%*c", buffer);
//	person->fname = (char*)malloc(strlen(buffer) + 1);
//	if (person->fname != NULL)
//		strcpy(person->fname, buffer);
//
//	char buffer2[SLEN] = { 0, };
//	printf("Input your last name\n>>");
//	scanf("%[^\n]%*c",buffer2);
//	person->lname = (char*)malloc(strlen(buffer2) + 1);
//	if (person->lname != NULL)
//		strcpy(person->lname, buffer2);
//}
//
//void makeinfo(struct namect* person)
//{
//	person->letters = strlen(person->fname) + strlen(person->lname);
//}
//
//void showinfo(struct namect* person)
//{
//	printf("Hi %s %s\nyour name have %d characters\n",
//		person->fname, person->lname, person->letters);
//}
//
//void cleanup(struct namect* person)
//{
//	free(person->fname);
//	free(person->lname);
//}