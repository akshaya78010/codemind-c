#include<stdio.h>
int main()
{
    int n,s=0;
    scanf("%d",&n);
    for(int i=2;i<=n;i++)
    {
        if(n%i==0)
        {
            s+=n/i;
        }
    }
    if(s>n)
    {
        printf("True");
    }
    else if(s<=n)
    {
        printf("False");
    }
}