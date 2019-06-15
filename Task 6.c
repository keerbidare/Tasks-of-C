#include<stdio.h>
main()
{
	int num,mul,rin,rat=0;
	float dig,i=0;
	printf("Enter a number:\n");
	scanf("%d",&num);
	rin=num;
	while(rin!=0)
	{
		i++;
		rin=rin/10;
	}
	while(num>0)
	{dig=num%10;
	rat=pow(dig,i);
	mul=mul+rat;
	num/=10;
	}
	if(mul=num)
	printf("\nThe number is an angstorm number");
	else
	printf("\nNot an angstorm nmumber");
}
