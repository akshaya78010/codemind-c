#include<stdio.h>
int main()
{
    int n,p,s=0,r;
    scanf("%d",&n);
    p=n*n;
    while(p>0)
    {
        r=p%10;
        s+=r;
        p=p/10;
    }
    if(n==s){
        printf("Neon Number");
    }
    else if(n!=s)
    {
        printf("Not Neon Number");
    }
    }