#include<stdio.h>
int main()
{
    int a,b,r,res=0;
    scanf("%d %d",&a,&b);
    for(int i = a ; i<=b ; i++)
    {
        int j=i;
        res=0;
    while(j!=0)
    {
        r=j%10;
        res=res*10+r;
        j=j/10;
    }
        if(res==i)
        {
            printf("%d ",i);
        }
    }
}
