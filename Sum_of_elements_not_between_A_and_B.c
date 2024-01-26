#include<stdio.h>
int main()
{
    int n;
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
    for(int i=0;i<n;i++)
    {
        if(arr[i]==a)
        {
            c=i;
        }
    }
    for(int i=0;i<n;i++)
    {
         if(arr[i]==b)
        {
            d=i;
        }
    }
    int sum=0;
    for(int i=0 ;i<n ; i++)
    {
        if(arr[i]<a||arr[i]>b)
        {
           sum+=arr[i];
       }
    }
    printf("%d",sum);
}