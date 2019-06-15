#include<stdio.h>
main()
{char a[100],b[100]={'\0'};
//int i,j,n,l=0;
printf("Enter a word :");
scanf("%s",&a);
//l=strlen(a);
/*strcpy(a,b);
for(i=0,j=l-1;i!=j;i++,j--)
{
if(a[i]!=b[j])
{
n=1;
break;
}}

if(n==1)
printf("The word is not palindrome");
else
printf("The word is a palindrome");}*/
if(strcmp(a,strrev(b))==0)
printf("The word is palindrome");
else
printf("The word is not a palindrome");}
