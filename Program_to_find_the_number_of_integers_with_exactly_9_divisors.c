#include<stdio.h>
int divisor(int n)
{
    int div=0;
    for(int i=1 ; i<=n ; i++)
    {
        if(n%i==0)
        {
            div+=1;
        }
    }
    return div;
}
int main()
{
    int n,count=0;
    scanf("%d ",&n);
    for(int i = 1 ; i<=n ; i++)
    {
        if(divisor(i)==9)
        {
            printf("%d ",i);
            count+=1;
        }
    }
    printf("
Total=%d",count);
}
