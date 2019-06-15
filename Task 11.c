#include<stdio.h>
struct book{
	char title[100];
	char author[100];
	char genre[100];
};
main()
{
	struct book b;
	printf("Enter the name of your book:\n");
	scanf("%s",&b.title);
	printf("Enter the author of your book:\n");
	scanf("%s",&b.author);
	printf("Enter the genre the book belongs to:\n");
	scanf("%s",&b.genre);
	printf("The description of your book is:\n1.Name:%s\n2.Author:%s\n3.Genre:%s\n",b.title,b.author,b.genre); 
	
}
