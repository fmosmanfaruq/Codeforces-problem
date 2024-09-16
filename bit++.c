#include<stdio.h>
int main()
{
    char s[4];
    int n,count=0;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%s",&s);
        if(s[1]=='+')
        {
            count++;
        }
        else if(s[1]=='-') {
            count--;
        }
    }
    printf("%d",count);
}