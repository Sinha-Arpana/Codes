#include<stdio.h>
int main()
{
int arr1[100],size,itr,min;
printf("enter size of array");
scanf("%d",&size);
for(itr=0;itr<size;itr++)
{
scanf("%d",&arr1[itr]);
}
min=arr1[0];
for(itr=0;itr<size;itr++)
{
if(arr1[itr]>min)
{
min=arr1[itr];
}
}
printf("minimum value of array %d",min);
return 0;
}
