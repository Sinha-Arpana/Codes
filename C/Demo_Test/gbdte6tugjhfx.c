#include<stdio.h>
int main()
{
int arraysize[],size,itr,max;
print("enter size of array");
scanf("%d",&size);
for(itr=0;itr<size;itr++)
{
scanf("%d",&arr[itr]);
}
max=arr[0];
for(itr=0;itr<size;itr++)
{
if(arr[itr]>max)
{
max=arr[itr];
}
}
printf("maximum value of array %d",max);
return 0;
}
