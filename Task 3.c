#include<stdio.h>
main()
{//ask them to enter their maarks,and store them
printf("Enter your marks ftrom any three subjects\n");
int m1=0,m2=0,m3=0;
scanf("%d %d %d",&m1,&m2,&m3);
//Compute sumand AVERAGE
int sum=0;
float average=0;
sum=m1+m2+m3;
average=(sum)/3;
//DISPLAY
printf("The sum and average of your marks are %d and %f respectivly",sum,average);
}
