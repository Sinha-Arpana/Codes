#include<stdio.h>
int main()
{
int arr1[100],size,itr,max;
print("enter size of array");
scanf("%d",&size);
for(itr=0;itr<size;itr++)
{
scanf("%d",&arr1[itr]);
}
max=arr1[0];
for(itr=0;itr<size;itr++)
{
if(arr1[itr]>max)
{
max=arr1[itr];
}
}
printf("maximum value of array %d",max);
return 0;
}
