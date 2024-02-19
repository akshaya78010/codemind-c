#include<stdio.h>
int sum(int n)
{
    int s=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0 && i<n)
        {
            s+=i;
        }
    }
    return s;
}
int main()
{
    int n;
    scanf("%d ",&n);
    if(sum(n)==n)
    {
        printf("PERFECT");
    }
    else if(sum(n)<n)
    {
        printf("DEFICIENT");
    }
    else if(sum(n)>n)
    {
        printf("ABUNDANT");
    }
}