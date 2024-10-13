#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x,y,arr[5][5],count;
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            scanf("%d",&arr[i][j]);
            if(arr[i][j]==1)
            {
                x=i;
                y=j;
            }
        }
    }
    count = abs(x-2) + abs(y-2);
    printf("%d",count);
}