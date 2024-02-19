#include<stdio.h>
int main()
{
    int n,r,p=1,sum=0;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        p*=r;
        sum+=r;
        n=n/10;
    }
    printf("%d",p-sum);
}