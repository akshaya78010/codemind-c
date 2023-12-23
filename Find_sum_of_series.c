#include<stdio.h>
int main()
{
    float n,i=1,s=0,p;
    scanf("%f",&n);
    while(i<=n)
    {
        p=1/i;
        i++;
        s=s+p;
    }
    printf("%.2f",s);
}