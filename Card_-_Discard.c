#include<stdio.h>
#include<math.h>
int main()
{
    int n,s=0;
    scanf("%d",&n);
    for(int i=n;i<=52;i+=n)
    {
        s++;
    }
    printf("%d",abs(n*s-52));
}