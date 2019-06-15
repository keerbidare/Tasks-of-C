#include<stdio.h>
main()
{
char fn[100],ln[100]={'\0'};
printf("\nEnter your first name:");
scanf("%s",&fn);
printf("Enter your last name:");
scanf("%s",&ln);
strcat(fn," ");
strcat(fn,ln);
printf("Your full name is:%s",fn);
}
