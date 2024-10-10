#include<stdio.h>
int main()
{
    long long int n,m,a,x,y;
    scanf("%lld %lld %lld",&n,&m,&a);
    x = n/a +(n%a!=0);
    y = m/a +(m%a!=0);
    printf("%lld\n",x*y);
}