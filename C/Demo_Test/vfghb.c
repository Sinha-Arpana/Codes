#include<stdio.h>
int main()
{
int size,itr,num,occur=0;
printf("enter the array %d element size");
scanf("%d",&size);
int arr[size];
printf("enter the array %d element size");
for(itr=0;itr<size;itr++)
{
printf("please enter the array item to know=");
scanf(%d,num);
for(itr=0;itr<size;itr++)
{
if (arr[itr]==num)
{
occur++
}
}
printf("%d occured %ditem\n",num,occur);
return 0;
}
