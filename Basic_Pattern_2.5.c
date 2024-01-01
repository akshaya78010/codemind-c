#include<stdio.h>
int main()
{
    int n,a=1;
    scanf("%d",&n);
    for(int i=n;i>=1;i--)
    {
        for(int j=1;j<=n-i+1;j++)
        {
            printf("%c ",i+64);
        }
        printf("
");
    }
}