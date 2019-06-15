#include<stdio.h>
main()
{ int a[100],num,i=0;
  printf("Enter the number ofthe elments of an array:\n");
  scanf("%d",&num);
  printf("Enter a set of numbers:\n");
  for(i=0;i<num;i++)
  scanf("%d",&a[i]);
  int min,max=0;
  a[0]=min;
  a[0]=max;
  for(i=1;i<num;i++)
  {if(a[i]<min)
  min=a[i];
  if(a[i]>max)
  max=a[i];
  }
  printf("The largest number in the array is %d and the smallest is %d",max,min);
}
