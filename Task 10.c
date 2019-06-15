#include<stdio.h>
main()
{int i,j=0;
for(i=0;i<=5;i++)
{
	for(j=1;j<=5-i;j++)
	{
		printf("%d",j);
	}
	printf("\n\n");
}
}
