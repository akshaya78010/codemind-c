#include<stdio.h>
int main()
{
    int n,found;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int m;
    scanf("%d",&m);
    for(int i=0;i<n;i++)
    {
        if(arr[i]==m)
        {
        found=1;
        }
    }
    if(found==1)
    {
        printf("True");
    }
    else if(found==0)
    {
        printf("False");
    }
}