#include<stdio.h>
int main()
{
int arr[3][3],itr,itr1;
for(itr=0;itr<3;itr++)
{
for(itr1=0;itr1<3;itr++)
scanf("%d",&arr[itr][itr1]);
}
for(itr1=0;itr1<3;itr++)
{
printf("%d",arr[itr][itr1]);
}
}
  return 0;
}
