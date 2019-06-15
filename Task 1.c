#include<stdio.h>
main()
{int num=0,age=0;
char name[100];
printf("Hello,Welcome \n May I know your name?\n");
scanf("%s",&name);
printf("How old are you\n");
scanf("%d",&age);
printf("Please leave your phone number below\n");
scanf("%d",&num);
printf("Your details are as follows:\n");
printf("-------------------------------------\n");
printf(" 1.%s\n 2.%d\n 3.%d\n",name,age,num);
printf("-------------------------------------\n");
printf("Thanks for giving us your details!");
}
