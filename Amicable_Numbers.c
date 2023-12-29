#include<stdio.h>
int main()
{
    int a,b,s=0,p=0;
    scanf("%d%d",&a,&b);
    for(int i=1;i<=a;i++)
    {
        if(a%i==0)
        {
            s+=i;
        }
    }
    for(int i=1;i<=b;i++)
    {
        if(b%i==0)
        {
            p+=i;
            }
    }
    if(a==p-b&&b==s-a)
    {
        printf("Amicable");
}
    else
    {
        printf("Not Amicable");
    }
}