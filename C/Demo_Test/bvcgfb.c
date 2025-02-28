#include<stdio.h>
int main()
{
int arr[3][3],itr;
for(itr=0;itr<3;itr++)
{
for(itr1=0;itr1<3;itr1++)
{
scanf("%d",&arr[itr][itr1]);
}
for(itr1=0;itr1<3;itr++)
{
printf("%d",arr[itr][itr1]);
}
}
return 0;
}
