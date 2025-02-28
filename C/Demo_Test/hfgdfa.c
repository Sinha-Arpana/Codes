#include<stdio.h>
int main()
{
int size_array,sum=0,size,itr;
printf("enter size of an array");
scanf("%d",&size_array);
int arr[size];
for(itr=0;itr<size;itr++)
{
scanf("%d",&arr[itr]);
}
for(itr=0;itr<size;itr++)
{
sum+=arr[itr];
}
printf("%d",sum);
return 0;
}
