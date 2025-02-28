#include<stdio.h>
int main()
{
int itr array[100],sizeitr max;
print("enter size of array");
scanf("%d",&size);
printf("enter value in array");
for(itr=0,itr<size,itr++)
{
scanf("%d",array[itr]);
}
max=array[0];
for(itr=0,itr<size,itr++)
{
if(array[itr]>max)
{
max=array[itr];
}
}
print("maximum value of array %d",max);
return 0;
}
