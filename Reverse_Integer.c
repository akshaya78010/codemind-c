#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int res=0,r;
    while(n)
    {
        r=n%10;
        res=res*10+r;
        n=n/10;
    }
    printf("%d",res);
}