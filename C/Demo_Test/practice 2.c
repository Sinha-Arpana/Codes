#include<stdio.h>
int main()
{
    for(int itr=1; itr<=4; itr++)
        {
            for(int itr1=1; itr1<=itr; itr1++)
            {
                printf("*");
            }
            printf("\n");
        }

        return 0;
}
