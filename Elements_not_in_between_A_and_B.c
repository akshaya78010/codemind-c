#include<stdio.h>
int main()
{
    int n,flag=0;
    scanf("%d
",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d
",&arr[i]);
    }
    int a,b,c,d;
    scanf("%d %d
",&a,&b);
    int sum=0;
    for(int i=0 ;i<n ; i++)
    {
        if(arr[i]<a || arr[i]>b)
        {
            flag=1;
     printf("%d ",arr[i]);   
       }
    }
    if(flag==0)
    {
        printf("-1");
    }
    }