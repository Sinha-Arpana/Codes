#include<stdio.h>
int mai()
{
int size,i,num,occur=0;
printf("enter the array size");
scanf("%d",&size);
int arr[size];
printf("enter the array %d element size");
for(i=0;i<size;i++)
{
scanf("%d",&arr[i]);
}
printf("please enter the array item to know=");
scanf("%d",num);
for(i=0;i<size;i++)
{
if arr[i]==num
}
occur++;
}
}
printf("%d occured %items\n",num,occur);
return 0;
}
