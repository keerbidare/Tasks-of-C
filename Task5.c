#include<stdio.h>
main()
{
	int num,dig,sum=0;
	printf("Enter a number \n");
	scanf("%d",&num);
	while(num>0)
	{dig=num%10;
	sum=(sum*10)+dig;
	num=num/10;
	}
	printf("The reverse of the number %d is %d",num,sum);
	
}
