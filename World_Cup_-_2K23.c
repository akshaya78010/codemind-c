#include<stdio.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    for(int i=n;i>0;i--)
    {
        sum+=i-1;
    }
    printf("%d",sum);
}