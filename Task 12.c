#include<stdio.h>
main()
{printf("Select one option:\n1.Celsius to farheniet\n2.Farheniet to celsius\n3.Exit\n");
int a=0;
scanf("%d",&a);

switch(a)
{case 1:
   {
	printf("Enter the temparature in celsius:\n");
	int cel,far=0;
	scanf("%d",&cel);
	far=9/5*cel+32;
	printf("The value of temparature in farheniet:%d",far);
	break;}
	case 2:
	{printf("Enter the temparature in farheniet:\n");
	int Cel,Far=0;
	Cel=5*(Far-32)/9;
	printf("The value of temparature in celsius:%d",Cel);
	break;}
	case 3:
	exit(0);
	default:
	printf("Invalid choice");	
}}
