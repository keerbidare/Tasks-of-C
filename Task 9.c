#include<stdio.h>
main()
{int a=0;
int ans=0;
printf("Enter a number:\n");
scanf("%d",&a);
int i=0;
ans=a;
for(i=1;i!=a;i++)
{
	ans=ans*i;
}
printf("The factorial of the given number is\n:%d",ans);
}
