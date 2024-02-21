#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int u;
    scanf("%d",&u);
    int x=pow(10,u);
    int f=n%x;
    while(n>=x)
    {
        n=n/10;
    }
   int d=abs(f-n);
   printf("%d",d);
}