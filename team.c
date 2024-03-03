#include<stdio.h>
int main ()
{
    int a,b,c,n,count=0;
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        scanf("%d%d%d",&a,&b,&c);
    }
    count=a+b+c;
    if (count>=2)
    {
        printf("%d",count);
    }


}