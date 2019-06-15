#include<stdio.h>
main()
{//Ask them to enter the temp and store it.
printf("Please enter the temparature around you in celsius:\n");
float temp=0;
scanf("%f",&temp);

//convert the temp into farheniet
float tem=0;
tem=((9*temp/5)+32);
// Display back the results
printf("\n The temparature around you is %f",tem);
}
