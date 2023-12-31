#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=65;j<=i+65-1;j++)
        {
         printf("%c ",j);   
        }
        printf("
");
    }
}